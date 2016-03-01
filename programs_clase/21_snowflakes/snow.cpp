#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

#define FLAKES 60
#define VMAX 3
#define VMIN 0.5


	/* Hacemos un alias q se llama Copo
	 * y cada vez que pongamos Copo tenemos
	 * un struct Copo con sus atributos*/
typedef struct {
    double x;	//situación en X
    double y;	//situación en Y
    double vy;	//velocidad de caída
} Copo;

	/* ësta función recibe un array de
	 *structura Copo de FLAKES elementos
	 *y un entero que es la anchura de la pantalla
	 *y con el bucle ponemos valores aleatorios
	 *en cada campo de cada copo*/
void init(Copo data[FLAKES], int width){
    for (int i=0; i<FLAKES; i++){
	data[i].x = drand48() * width; //situacion en X
	data[i].y = 0;	//situación de Y
	data[i].vy = drand48() * VMAX + VMIN;//velocidad de caída
    }
}

void step(Copo data[FLAKES]){
    for (int i=0; i<FLAKES; i++){
	data[i].x += rand() % 3 - 1;
	data[i].y += data[i].vy;
    }
}

void dibuja(Copo data[FLAKES], int width, int height){

    clear();
    for (int i=0; i<FLAKES; i++)	
        mvprintw( (int)data[i].y % height,
		 (int)data[i].x % width, "*");

    refresh();

}

int main(int argc, const char **argv){

    int width, height;
    Copo snowfall[FLAKES];

    srand(time(NULL));
    srand48(time(NULL));

    init(snowfall, width);

    initscr();

    getmaxyx(stdscr, height, width);
    halfdelay(1);
    curs_set(0);

    while(getch() != 27) {
	step(snowfall);
	dibuja(snowfall, width, height);
    }

    curs_set(1);

    endwin();


	return EXIT_SUCCESS;
}
