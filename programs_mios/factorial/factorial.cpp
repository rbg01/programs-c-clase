/*calculo de factoriales de forma recursiva*/

#include <stdio.h>
#include <stdlib.h>

long int factorial(int n){ /*definición de función*/


    if (n <= 1)
	return (1);
    else
	return (n * factorial(n -1));



}

int main(int argc, const char **argv){

    int numero;
    /*leer cantidas entera*/
    printf("Introduce un número:  ");
    scanf ("%d", &numero);
    /*calcualar y visualizar el factorial*/
    printf("%i! = %ld\n",numero, factorial(numero));

	return EXIT_SUCCESS;
}

