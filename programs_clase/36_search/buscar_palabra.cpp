#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

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

bool buscar_letra(char *tablero, char *palabra){

    for(int f=0; f<LADO; f++){
        for(int c=0; c<LADO; c++)
            if(*(tablero+f*LADO+c)!= *palabra)
                return false;
    }
    return true;
}

void pon_mays(char palabra[], int fin){

    for(int i=0; i<fin; i++)
         toupper(palabra[i]);
    
    return;
}
int main(int argc, const char **argv){

    srand(time(NULL));

    const char abcedario[] = {"ABCADEUFGHIJKELMNOPQIRSTUVWXOYZ"};
    char tablero[LADO][LADO],
         palabra[MAXPALABRA];
    int prueb[LADO][LADO];
    bool letra_encontrada;

    system("clear");

    rellenar_tablero(abcedario, *tablero);

    pintar_tablero(*tablero);

    printf("\n");

    printf("\tIntroduce una palabra a buascar:\n");
    fgets(palabra, MAXPALABRA, stdin);

    int fin_palabra = ((int)strlen(palabra)-1);

    pon_mays(palabra, fin_palabra); 

    letra_encontrada = buscar_letra(*tablero, palabra);

    if(letra_encontrada!=true)
        printf("letra No encontrada");
    else
        printf("letra encontrada");
   
    


    return EXIT_SUCCESS;
}
