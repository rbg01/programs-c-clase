#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int primos[] = {2, 3, 5, 7};
    int entrada;
    //pedir y asignar entrada
    printf ("Dime un número: \n");
    scanf (" %i", &entrada);
    //bucle principal
    for (int i = 0; i < 4; i++){

	if (entrada % primos[i] == 0)
	    printf ("\t%i es divisible entre %i\n", entrada, primos[i]);
	if (entrada % primos[i] != 0)
	    printf ("\t%i no es divisible entre %i\n", entrada, primos[i]);
    }





    return EXIT_SUCCESS;
}
