#include <stdio.h>
#include <stdlib.h>
#include "suma.h"

#define FIL 3
#define COL 4


int main(int argc, const char **argv){


    int A[FIL][COL];

    leer(&A,FIL,COL);
    sumar(&A,FIL,COL);
    mostrar(&A,FIL,COL);





	return EXIT_SUCCESS;
}
