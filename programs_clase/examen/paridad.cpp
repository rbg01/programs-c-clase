#include <stdio.h>
#include <stdlib.h>

#define BASE 2

int main(){

    int entrada = 0;
    int bin[16];
    int cont = 0;
    int suma = 0;
    int ent;


    // 1. Pedir datos de entrada.
    printf("Introduce un número entre 0 y 65535: ");
    //2. Leer el número y asignarlo a la variable
    scanf(" %i", &entrada);
    ent = entrada;
    /*  BUCLE PRINCIPAL para calcular los restos de la entrada y guardarlos en bin[] */

    for (int i=0; entrada != 0; i++, cont++){
	
	bin[i] = entrada % BASE;
	entrada /= BASE;


	}

	// 3.recorrer el array y vemos a ver la cantdad de unos que hay

    for  (int i = cont-1; i >=0; i--){
	printf ("%i", bin[i]);
        if (bin[i] == 1)
            suma+= 1;
    }

	// 4.Mostrar salida adecuada al numero de unos

    if ((suma % BASE) == 0)

       printf("\tEl número %i tiene paridad par\n", ent);

    else

       printf("\tEl número %i tiene paridad impar\n", ent); 

	printf("\n\n");

return EXIT_SUCCESS;
}
