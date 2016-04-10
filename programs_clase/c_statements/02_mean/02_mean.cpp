

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    float numeros,
	  suma = 0.0,
	  media = 0.0;

    // Pedir la entrada

    printf ("Dime 10 números:\n");

    // Leer la entrada y hacer la suma hasta 10 números

    for (int cont=0; cont<=9; cont++){

	scanf (" %f", & numeros);
	suma += numeros;

    }

    media = suma/10;

    printf ("La media de los números es: %f", media);











    return EXIT_SUCCESS;
}
