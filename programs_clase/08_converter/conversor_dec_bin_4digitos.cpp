#include <stdio.h>
#include <stdlib.h>
#define BASE 2 

int main(){

    int origen,
	cont = 0,
	i = 0,
	resto[4];

    //Solicitar entrada y guardar en origen



	
    printf("Dame un número entre 0 y 15: \n");
    scanf(" %i", &origen);
	

    if (origen > 15)
	printf ("Error!!\n(repite otr vez con números de 0 a 15)");

    else

    do {

    	resto[i] = origen % BASE;
	origen /= BASE;
	i += 1;
	cont += 1;


    } while (resto[i] != 0);



    // mostrar salida
    for ( int j = cont-2; j >= 0; j--){
	printf("%i",  resto[j]);
    }

    printf ("\n");








    return EXIT_SUCCESS;
}
