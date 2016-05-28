


/*  Solucionar un reparto óptimo de alumnos por autobús,
 *  Mediante un algoritmo genético    */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>


#define MAX 10
#define TOT_BUS 4
#define MAX_BUS 50
#define FILS 15

void haz_pattern(int array[][MAX]){
    //En cada elemento del array tienes que poner un número aleatorio entre 1 y 4

    for(int fil=0; fil<FILS; fil++)
        for(int col=0; col<MAX; col++)
            array[fil][col] = 1 + (rand() % 4);

}

void imprime(int array[][MAX], int brray[]){

    for(int fil=0; fil<FILS; fil++){
        for(int col=0; col<MAX; col++){
            printf("%i ", array[fil][col]);
        }
        printf("-->penalty = %i\n", brray[fil]);
    }

}

void calcula_penalty(int array[MAX], int penal[], int buses[], int clase[], int orden){



    for(int bus=0; bus<TOT_BUS; bus++){
        int aux = 0;
        for(int col=0; col<MAX; col++){
            if(array[col] == buses[bus])
                aux = aux + clase[col];

        }
        int resultado;
        resultado = MAX_BUS - aux;
        printf("%i - %i = %i del bus %i, del pattern %i\n",MAX_BUS,aux,resultado,bus+1, orden);
        if(resultado < MAX_BUS)
            penal[orden] += resultado;

        else
            penal[orden] += resultado * -2;

    }
    printf("%i\n", penal[orden]);



}


int main(int argc, const char **argv){

    srand(time(NULL));

    int clase_gente [] = {20, 15, 18, 32, 7, 10, 23, 13, 18, 12};
    int patterns[FILS][MAX];
    int autobuses[] = {1, 2, 3, 4};
    int penaltys[FILS];

    bzero(penaltys,FILS);

    haz_pattern(patterns);
    //Hacer un bucle para mandarle fila por fila a calcula_penalty
    for(int i=0; i<FILS; i++)
        calcula_penalty(patterns[i], penaltys, autobuses, clase_gente, i);








    imprime(patterns, penaltys);


    return EXIT_SUCCESS;
}
