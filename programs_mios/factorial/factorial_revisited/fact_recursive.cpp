
/*  Factorial versión recursiva */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n){


    if (n >= 1){

        return (n * factorial(n-1));
    }
    else

    return (1);
}


int main(int argc, const char **argv){

    int numero;

    scanf(" %i", &numero);

    printf("%i\n", factorial(numero));


    return EXIT_SUCCESS;
}


