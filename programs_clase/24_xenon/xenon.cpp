#include <stdio.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "physics.h"
#include "game.h"

#define FPS 60.
#define ROLL 0.8

const int SCREEN_W = 800;
const int SCREEN_H = 600;

/*Hacemos un enum de las teclas que hacen q se mueva la nave
 * para darles un valor numérico*/

int main(int argc, char **argv){

    /*declaramos nave como una estructura tipo móvil, q está definida
     * en el archivo "physics.h"*/
    struct Movil nave;


    /*creamos las variables de allegro, que son punteros
     * apuntando a NULL, de momento*/
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP *sprites = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    ALLEGRO_TIMER *timer = NULL;

    bool key[4] = {false, false, false,false};//Array para las teclas, todos a false 
    bool redraw = true;
    bool do_exit = false;

    /* Inicializamos allegro */
    if(!al_init()) {
        al_show_native_message_box (
                display,
                "Error",
                "Error",
                "Failed to initialize allegro!",
                NULL,
                ALLEGRO_MESSAGEBOX_ERROR);

        return 0;
    }

    /* Inicializamos añadido de imágenes */
    if(!al_init_image_addon()) {
        al_show_native_message_box (
                display,
                "Error",
                "Error",
                "Failed to initialize al_init_image_addon!",
                NULL,
                ALLEGRO_MESSAGEBOX_ERROR);

        return 0;
    }

ni    /* Inicializamos el teclado */
    if(!al_install_keyboard()) {
        al_show_native_message_box (
                display,
                "Error",
                "Error",
                "Failed to initialize al_init_image_addon!",
                NULL,
                ALLEGRO_MESSAGEBOX_ERROR);

        return 0;
    };

    /* Alegro artifact creation
     * del display, timer, cola eventos y sprites*/

    display = al_create_display(SCREEN_W, SCREEN_H);
    if(!display) {
        al_show_native_message_box(
                display,
                "Error",
                "Error",
                "Failed to initialize display!",
                NULL,
                ALLEGRO_MESSAGEBOX_ERROR);

        return 0;
    }


    timer = al_create_timer(1.0 / FPS);
    if(!timer) {
        al_show_native_message_box(
                display,
                "Error",
                "Error",
                "failed to create timer!\n",
                NULL,
                ALLEGRO_MESSAGEBOX_ERROR);

        al_destroy_display(display);

        return 0;
    }


    event_queue = al_create_event_queue();
    if(!event_queue) {
        al_show_native_message_box(
                display,
                "Error",
                "Error",
                "failed to create event_queue!\n",
                NULL,
                ALLEGRO_MESSAGEBOX_ERROR);

        al_destroy_display(display);
        al_destroy_timer(timer);

        return 0;
    }


    sprites = al_load_bitmap("images/xenon2_sprites.png");
    al_convert_mask_to_alpha(sprites, al_map_rgb(255,0,255));

    if(!sprites) {
        al_show_native_message_box(
                display,
                "Error",
                "Error",
                "Failed to load sprites!",
                NULL,
                ALLEGRO_MESSAGEBOX_ERROR);

        al_destroy_display(display);
        al_destroy_timer(timer);
        al_destroy_event_queue(event_queue);

        return 0;
    }

    /* registramos todos los eventos provenientes de la pantalla
     * el keyboard y el temporizador*/
    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_timer_event_source(timer));


    /* Init es una funcion definida como extern el "physics.h" , que le meto
     * los sprites, que es el bitmap de la nave, y &nave, que es una dirección
     * de memoria donde hemos declarado nave como estructura*/
    init(sprites, &nave);

    al_start_timer(timer);

    while(!doexit){
        ALLEGRO_EVENT ev;
        al_wait_for_event(event_queue, &ev);

        if(ev.type == ALLEGRO_EVENT_TIMER)
            redraw = true;
        else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;
        /* éste bloque funciona con el evento KEY_DOWN, y cuando apretamos
         * cualquier tecla, se registra el avento KEY_DOWN q corresponda */
        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_UP:
                    key[KEY_THROTTLE] = true;
                    break;

                case ALLEGRO_KEY_DOWN:
                    key[KEY_BRAKE] = true;
                    break;

                case ALLEGRO_KEY_LEFT:
                    key[KEY_ROTATE_LEFT] = true;
                    break;

                case ALLEGRO_KEY_RIGHT:
                    key[KEY_ROTATE_RIGHT] = true;
                    break;
            }
            /* Éste bloque funciona con el evento KEY_UP, cuando soltamos
             *  la tecla se registra el evento KEY_DOWN correspondiente.*/
        } else if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_UP:
                    key[KEY_THROTTLE] = false;
                    break;

                case ALLEGRO_KEY_DOWN:
                    key[KEY_BRAKE] = false;
                    break;

                case ALLEGRO_KEY_LEFT:
                    key[KEY_ROTATE_LEFT] = false;
                    break;

                case ALLEGRO_KEY_RIGHT:
                    key[KEY_ROTATE_RIGHT] = false;
                    break;

                case ALLEGRO_KEY_ESCAPE:
                    doexit = true;
                    break;
            }
        }

        if(redraw && al_is_event_queue_empty(event_queue)) {
            redraw = false;
            update_physics(key, &nave);
            al_clear_to_color(al_map_rgb(0,0,0));

 //         al_draw_bitmap(sprites,200,200,0);
            al_draw_bitmap(nave.img[2 + (int) (nave.v.x / ROLL) ],
                    SCREEN_W / 2 + nave.r.x,
                    SCREEN_H - 50 - nave.r.y,
                    0);
            al_flip_display();
        }
    }

        /* DEstrucción de los artefactos */
    al_destroy_display(display);
    al_destroy_timer(timer);
    al_destroy_event_queue(event_queue);
    al_destroy_bitmap(sprites);


    return 0;
}
