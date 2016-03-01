#include <stdio.h>
#include <stdlib.h>

int main(){

    int entrada, cont = 0;


     // 1. Pedir datos de entrada.

    printf("Introduce un número entre 0 y 9999: ");

     // 2. Leer el número y asignarlo a la variable

    scanf(" %i", &entrada);

    
        /*  BUCLE PRINCIPAL */
        
    for (cont; cont < 3; cont++){
     
    // 3. Imprimir el último dígito entrada

    printf("%i", entrada % 10);

    // 4. Desplazar dígitos de Entrada un posición a la drch

    entrada /= 10;
    }

    // 5. Imprimir el último dígito entrada

       printf("%i", entrada % 10);

       printf("\n\n");

	return EXIT_SUCCESS;
}
