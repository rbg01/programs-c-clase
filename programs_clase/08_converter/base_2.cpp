#include <stdio.h>
#include <stdlib.h>

#define BASE 2
int main(){

    int entrada, cont = 1;
    int resto[100];


     // 1. Pedir datos de entrada.

    printf("Introduce un número: \n");

     // 2. Leer el número y asignarlo a la variable

    scanf(" %i", &entrada);


        /*  BUCLE PRINCIPAL */

    for (int i=0; entrada != 0; i++, cont++){

        resto[i] = entrada % BASE;
      // 4. Desplazar dígitos de Entrada un posición a la drch

    entrada /= BASE;
    }

    // 5. Imprimir el último dígito entrada

    for (int j= cont; j>=0; j--)
       printf("%i", resto[j]);

       printf("\n\n");

	return EXIT_SUCCESS;
}
