#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include "functions.h"
#include <ctype.h>

#define MAXTABL 8
#define MAXDAD 64
#define DADOCARAS 6
//#define ESC 27


// función busca_palabra
bool buscala(char *letras, bool *comp, char *palabra, int longitud){

   // printf("%i", longitud);


    bool result;
    int match=0;
 
    while(match!=longitud){

        for(int i=0; i<longitud; i++){

            
            char letra = toupper(*(palabra+i));

            for (int f=0; f<MAXTABL; f++){
                for(int c=0; c<MAXTABL; c++){
                    if (*(letras+f*MAXTABL+c) == letra && *(comp+f*MAXTABL+c) == false){
                        *(comp +f*MAXTABL +c) = true;
                        match += 1;
                        break;
                    }
                    break;
                }

                break;
            }

        }

    }
    if(match == longitud){
        result = true;
        printf("Palabra no encontrada.");
    }
    else{
        result = false;
        printf("palabra No encontrada.");
    }
            
            /* for(int i=0; i<25; i++){
                char c = toupper(palabra[i]);
                printf("%c\n", c);
                        }
    printf("%lu", strlen(palabra)-1);*/



    return (result);

}

// Función pintar_tablero
void pintar_tablero(char *letras){

    for (int f=0; f<MAXTABL; f++){
        printf("\t\t");
        for (int c=0; c<MAXTABL; c++)
            printf("%c  ", *(letras+f*MAXTABL+c));

        printf("\n");
    }
    return ;
}

void tira_dados(const char *DADOS, char *letras){


    int dad=0;

    for (int f=0; f<MAXTABL; f++){
        for (int c=0; c<MAXTABL; c++, dad++){
            *(letras+f*MAXTABL+c) = *(DADOS+dad*DADOCARAS+menea_cara());
        }

    }

    return ;
}
// Función menea las caras de los dados

int menea_cara(){

    int cara_dado = (rand()%DADOCARAS);

    return(cara_dado);
}

// Funciòn menea los dados

int menea_dados(){

    int num_dado = (rand()%MAXTABL);

    return(num_dado);
}

// Función comparar necesaria para qsort

int cmpfunc(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

// Función progress

void progress(){


    for (int vez=0; vez<6; vez++){
        printf("\r");
        printf("\t");
        for (int i=0; i<vez; i++)
            printf("====");
        printf(">");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
    return ;
}

