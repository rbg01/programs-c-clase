#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include "functions.h"

#define MAXTABL 4
#define MAXDAD 16
#define DADOCARAS 6
// Funcion Tirar los dados



void pintar_tablero(char letras[MAXTABL][MAXTABL]){ 

    for (int f=0; f<MAXTABL; f++){
        printf("\t\t");
        for (int c=0; c<MAXTABL; c++)
            printf("%c  ", letras[f][c]);

        printf("\n");
    }
}

void tira_dados(const char DADOS[MAXDAD][DADOCARAS], char letras[MAXTABL][MAXTABL]){


    int dad=0;

    for (int fil=0; fil<MAXTABL; fil++){
        for (int col=0; col<MAXTABL; col++, dad++){
            letras[fil][col] = DADOS[dad][menea_cara()];
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
