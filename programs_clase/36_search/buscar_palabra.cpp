#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define LADO 16
#define MAXLETRAS 31
#define MAXPALABRA 35

void rellenar_tablero(const char *origen, char *destino){

    for(int f=0; f<LADO; f++){
        for(int c=0; c<LADO; c++)
            *(destino + f*LADO +c) = *(origen + rand()%MAXLETRAS);

    }
    return;
}

void pintar_tablero(char *tablero){

    for(int f=0; f<LADO; f++){
        printf("\t");
        for(int c=0; c<LADO; c++)
            printf("%c ",*(tablero + f*LADO +c));
        printf("\n");

    }

    return;

}

bool buscar_letra(char tablero[LADO][LADO], char palabra[], int fil, int col, int tamano){

    for(int offset=0; offset<tamano; offset++)
        if(tablero[fil][col+offset] != palabra[offset])
            return false;

    return true;
}


int main(int argc, const char **argv){

    srand(time(NULL));

    const char abcedario[] = {"abcadeufghijkelmnopqirstuvwxoyz"};
    char tablero[LADO][LADO],
         palabra[MAXPALABRA];
    int prueb[LADO][LADO];
    bool letra_encontrada = false;  //--> Flag

    rellenar_tablero(abcedario, *tablero);

    while(1){
        system("clear");


        pintar_tablero(*tablero);

        printf("\n");


        printf("\tIntroduce una palabra a buascar:\n");
        fgets(palabra, MAXPALABRA, stdin);

        int fin_palabra = ((int) strlen(palabra) - 1);

        palabra[fin_palabra] = '\0';
        printf("%i\n", fin_palabra);

        for (int f=0; f<LADO; f++){
            for (int c=0; c + fin_palabra < LADO
                    && !letra_encontrada; c++){
                letra_encontrada = buscar_letra(tablero, palabra, f, c, fin_palabra);

            }
        }

        if(letra_encontrada)
            printf("Palabra  encontrada\n");
        else
            printf("Palabra no encontrada\n");

        sleep(1);
    }



    return EXIT_SUCCESS;
}






