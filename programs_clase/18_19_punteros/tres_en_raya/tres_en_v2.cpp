
    /*  Tres en raya  con comprobacion */

#include <stdio.h>
#include <stdlib.h>

bool pedir(char tablero[3][3], char marca){
    int x, y;

    printf(" Jugador %c\n", marca);

    printf("x: ");
    scanf(" %i", &x);

    printf("y: ");
    scanf(" %i", &y);

    if (tablero[y][x]==marca)
        return false;
    else
        tablero[y][x] = marca;

    return true;

}

void pintar(char tablero[3][3]){
    for (int f=0; f<3; f++){
        for (int c=0; c<3; c++)
            printf("%c ", tablero[f][c]);
        printf("\n");
    }

}



int main(int argc, const char **argv){

    char tablero[3][3];
    bool comprueba;

    system("clear");

    /* Poner el tablero a cero*/
    for (int f=0; f<3; f++)
        for (int c=0; c<3; c++)
            tablero[f][c] = '_';

    pintar(tablero);

    while (1){

        comprueba = pedir(tablero, 'x');

        if(comprueba == true)
            pintar(tablero);
        else
            pedir(tablero,'x');
        printf("%i", comprueba);
        // si pedir devuelve false, mensaje de error, y pedir otra vez
        // si pedir devuelve true, seguimos adelante
        



       comprueba =  pedir(tablero, 'o');        
         if(comprueba == true)
            pintar(tablero);
        else
            pedir(tablero,'x'); 
        printf("%i", comprueba);
        
        
        // si pedir devuelve false, mensaje de error, y pedir otra vez
        // si pedir devuelve true, seguimos adelante
      


    }


    return EXIT_SUCCESS;
}
