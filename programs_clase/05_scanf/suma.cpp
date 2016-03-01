#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1,
	op2;

    /* bloque de entrada de datos */

    printf("Operando 1: ");
    scanf(" %i", &op1);
    printf("Operando 2: ");
    scanf(" %i", &op2);

    /* procesado */
    /* y salida de datos */

    printf("%i + %i = %i\n", op1, op2, op1+op2);







	return EXIT_SUCCESS;
}
