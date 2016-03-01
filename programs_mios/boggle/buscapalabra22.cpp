#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv){

    int match,
	temp=0,
	i=0,
	fin=0;
    bool resultado,
	 temporal[16];
    char palabra_intro[25],
	 array[]= {"ESIUEAIIDLIBQRND"},
	 letra,
	 *p;

	// Pnemos todos los elementos de temporal a false

    for (int j=0; j<16; j++){
	temporal[j] = false;
    }


    do {

	printf ("introduce una palabra:  \n");
	fgets(palabra_intro, 25, stdin);

	match = 0;
	fin = strlen(palabra_intro);

	/* Para no contar letras de más tengo q añadir al bucle la opción de detectar si ésa coincidencia ya ha sido evaluada antes; en caso que si, tengo q seguir buscando; y en caso que no, tengo un match  */


	for (i=0; i<16; i++){

	    letra = array[i];
	    p = strchr(palabra_intro, letra);

	    if ( (p != NULL) && (temporal[i] = true) ){
		



		match+=1;
		
	    }


	}


	(match == fin-1)? resultado = true:resultado = false;

	printf("%i   %i   %i   %i\n", match, i, fin, resultado);
	printf("\n");

	/* después de hacer la búsqueda, mostramos la salida en funcuón del valor de resultado */

	switch (resultado){

	    case 0:
		printf("coinciden %i letras, pero...\n", match);
		printf("NO hay coincidencia\n");
		break;

	    case 1:
		printf("SI hay coincidencia\n");
		break;
	}


    } while (palabra_intro[0] != '\n');

    printf("\n");
    printf ("Gracias por jugar...\n");

    return EXIT_SUCCESS;

}
