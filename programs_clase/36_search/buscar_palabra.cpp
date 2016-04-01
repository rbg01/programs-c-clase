#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define LADO 16
#define MAXLETRAS 27

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
            printf("%c%i ",*(tablero + f*LADO +c),rand()%MAXLETRAS);
        printf("\n");

    }


}
int main(int argc, const char **argv){

    srand(time(NULL));

    const char abcedario[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char tablero[LADO][LADO];
    int prueb[LADO][LADO];

    for(int i=0; i<(int)strlen(abcedario); i++)
        printf("%c", abcedario[i]);
    printf("%i", (int)strlen(abcedario));
    printf("co%co", 165);

    rellenar_tablero(abcedario, *tablero);

    pintar_tablero(*tablero);


    for(int f=0; f<LADO; f++){
        printf("\t");
        for(int c=0; c<LADO; c++){
            prueb[f][c] = rand()%MAXLETRAS;
            printf("%i ", prueb[f][c]);
                    }
        printf("\n");

    }


    


    return EXIT_SUCCESS;
}
