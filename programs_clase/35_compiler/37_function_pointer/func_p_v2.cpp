

    /*  Versión redundante */

#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){return op1 + op2; }
int resta(int op1, int op2){return op1 - op2;}


int main(int argc, const char **argv){

    int (*p)(int, int);

    p = &suma;
    int resultado = (*p)(2,3);
    printf("suma = %i\n", resultado);

    p = & resta;
    resultado = (*p)(2,3);
    printf("resta = %i\n", resultado);

    return EXIT_SUCCESS;
}


