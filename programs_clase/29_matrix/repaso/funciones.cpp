#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void leer( int *A[fil], int fil, int col ){


    for (int i=0; i<fil-1; i++){
        printf ("introduce los datos para la línea %i", fil+1 );
        for (int j=0; j<col; j++)
            scanf (" %i"; *(A[fil]+col));
    }

}

void sumar ( int *A[fil], int fil, int col ) {


    for (int i=0; i<fil-1; i++){
        *(A[fil]+col) = 0;
        *(A[fil]+col) += *(A[i]+col); 
        col +=1;


    }
}

void mostrar ( int *A[fil], int fil, int col ){

    for (int i=0; i<col; i++)
        printf (" %i", *(A[fil] + i));
    printf(" \n");
}
