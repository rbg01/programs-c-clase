#include <stdio.h>
#include <stdlib.h>
#define BASE 2 

int main(){

    int origen,
	cont = 0,
	resto[15];

    //Solicitar entrada y guardar en origen

    printf("Dame un número: \n");
    scanf(" %i", &origen);


    for (int i=0; resto[i] != 0; i++, cont++){
	//vamos guardando an resto el resultado

	resto[i] = origen % BASE;
	origen /= BASE;

    }
    // mostrar salida
    for ( int j = cont-1; j >= 0; j--){
	printf("%i",  resto[j]);
    }

    printf ("\n");








    return EXIT_SUCCESS;
}
