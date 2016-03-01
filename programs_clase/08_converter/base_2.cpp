#include <stdio.h>
#include <stdlib.h>

#define BASE 2
int main(){

    int entrada, cont = 0;


     // 1. Pedir datos de entrada.

    printf("Introduce un número entre 0 y 65535: ");

     // 2. Leer el número y asignarlo a la variable

    scanf(" %i", &entrada);

    
        /*  BUCLE PRINCIPAL */
        
    for (cont; cont < 15; cont++){     
    

    printf("%i", entrada % BASE);

    // 4. Desplazar dígitos de Entrada un posición a la drch

    entrada /= BASE;
    }

    // 5. Imprimir el último dígito entrada

       printf("%i", entrada % BASE);

       printf("\n\n");

	return EXIT_SUCCESS;
}
