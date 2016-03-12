#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2); //-->DECALRACION de la función

int main(int argc, const char **argv){

    printf ("2 + 3 = %i", suma(2,3));


	return EXIT_SUCCESS;
}

int suma(int op1, int op2){

    return op1+op2;
}
