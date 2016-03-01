#include <stdio.h>
#include <stdlib.h>
#include "marrick.h"
#include "multiplica.h"

#define FIL_A 4
#define COMUN 3
#define COL_B 5

int main(int argc, const char **argv){

    int matriz_a[FIL_A][COMUN],
        matriz_b[COMUN][COL_B],
        matriz_prod[FIL_A][COL_B];

    /* solicitar datos para rellenar las matrices*/
    system ("clear");

    rellena((int *)matriz_a, FIL_A, COMUN, "primera: A");
    imprime((int *)matriz_a, FIL_A, COMUN, "A");
    rellena((int *)matriz_b, COMUN, COL_B), "segunda: B";
    imprime((int *)matriz_b, COMUN, COL_B, "B");

    /*hacer la operacion con la funcion*/

    multiplica(int *matriz_a, int *matriz_b, int *matriz_prod,int FIL_A, int COL_B);

  
    imprime ((int *)matriz_prod, FIL_A, COL_B, "P");





     	return EXIT_SUCCESS;
}
