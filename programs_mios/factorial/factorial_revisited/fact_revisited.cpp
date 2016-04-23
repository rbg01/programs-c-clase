
  /*  Factorial versión normal*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int numero){

    

    int resultado = 1;

    for(int i = numero; i >= 1; i--)
        resultado *= i;

    return resultado;

}

int main(int argc, const char **argv){

    int numero;

    scanf(" %i", &numero);

    printf("%i\n", factorial(numero));


	return EXIT_SUCCESS;
}
