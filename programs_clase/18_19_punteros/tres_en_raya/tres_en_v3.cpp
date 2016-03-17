

    /*  Tres en raya con punteros y realloc */

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

void pedir(char *tablero, char marca){
    int x, y;

    printf(" Jugador %c\n", marca);

    printf("x: ");
    scanf(" %i", &x);

    printf("y: ");
    scanf(" %i", &y);

    *(tablero+(y * MAX + x)) = marca;
}

void pintar(char *tablero){
    for (int f=0; f<MAX; f++){
        for (int c=0; c<MAX; c++)
            printf("%c ", *(tablero+(f * MAX + c)));
        printf("\n");
    }

}



int main(int argc, const char **argv){

    char *tablero = NULL;

    tablero = (char *) realloc(tablero, 9 * sizeof(char));

    /* Poner el tablero a cero*/
    for (int f=0; f<3; f++)
        for (int c=0; c<3; c++)
            *(tablero+(f * MAX + c)) = '_';

    for (int vez=0; vez<3; vez++){
        pedir(tablero, 'x');
        pedir(tablero, 'o');
        pintar(tablero);
    }


    free(tablero);
    return EXIT_SUCCESS;
}
