


/*  Solucionar un reparto óptimo de alumnos por autobús,
 *  Mediante un algoritmo genético    */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void imprime(int array[][MAX]){

    for(int fil=0; fil<FILS; fil++){
        for(int col=0; col<MAX; col++){
            printf("%i ", array[fil][col]);
        }
        printf("\n");
    }

}

void calcula_penalty(int array[][MAX], int penal[], int buses[]){

    for(int bus=0; bus<TOT_BUS; bus++){
        for(int fil=0; fil<FILS; fil++){
            for(int col =0; col<MAX; col++){

                if(array[fil][col] == buses[bus])
                    penalty += penalty + penal[col];
            }
        }
    }
}
int main(int argc, const char **argv){

    srand(time(NULL));

    int clase_gente [] = {20, 15, 18, 32, 7, 10, 23, 13, 18, 12};
    int patterns[FILS][MAX];
    int autobuses[] = {1, 2, 3, 4};
    int penaltys[MAX];

    haz_pattern(patterns);
    calcula_penalty(patterns, penaltys, autobuses);
    imprime(patterns);



    return EXIT_SUCCESS;
}
