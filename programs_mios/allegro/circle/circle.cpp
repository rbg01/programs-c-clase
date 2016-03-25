#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h> // Librería inicial de Allegro
#include <allegro5/allegro_primitives.h> // Addon de primitivas (figuras)

#define VENTANA_X 500
#define VENTANA_Y 300

// Redefinición de tipos
typedef ALLEGRO_DISPLAY aDisplay;

// Variables globales
aDisplay *dis = NULL;

//Funciones
void inicializar(void){

    //Inicializar los AddOns
    if(!al_init())
    {
        fprintf(stderr, "Error al inicializar Allegro."); // Imprimir errores en stream STDERR
        exit(-1);
    }

    if(!al_init_primitives_addon())
    {
        fprintf(stderr, "Error al inicializar el addon de primitivas."); // Imprimir errores en stream STDERR
        exit(-2);
    }

    dis = al_create_display(VENTANA_X, VENTANA_Y); // Crear el display de tamaño 500x300 píxeles

    al_set_window_title(dis, "Ejemplo Allegro 5 - www.multiaportes.com"); // Establecer el título de la ventana
}

void finalizar(){

    al_shutdown_primitives_addon(); // Finalizar el addon de primitivas
    al_destroy_display(dis); // Destruir la ventana
}

void colorearPantalla(){

    al_clear_to_color(al_map_rgb_f(0.0, 1.0, 0.0)); // Limpiar la ventana y establecer un color de fondo RGB (color rojo: R=0=0.0, G=255=1.0, B=0=0.0)
}

int main(void){
    inicializar();

    colorearPantalla();
    al_draw_filled_circle(200, 160, 130.0, al_map_rgb_f(1.0, 0.0, 1.0));//Crear un círculo: x =200px,y =160px radio =130px,color morado: R=255, G=0, B=255
    al_flip_display(); // Dibujar en pantalla todo lo almacenado en el buffer, en este caso solamente está el círculo de arriba

    system("read -t 5"); // Cerrar la ventana después de 5 segundos (Linux)
    printf("Por Eder Or - www.multiaportes.com\n");

    finalizar();

    return 0;
}

