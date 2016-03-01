#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv){

    int match,
	i=0,
	fin=0;
    bool resultado,
	 temporal[16],
	 *b;
    char palabra_intro[25],
	 array[]= {"ESJUEAIADLIAQRND"},
	 letra=0,
	 *p;



    do {

	for (int relleno=0; relleno<16; relleno++){
	    temporal[relleno] = false;
	}

	
	printf ("introduce una palabra:  \n");
	fgets(palabra_intro, 25, stdin);




	match = 0;
	fin = strlen(palabra_intro)-1;


	for (int i=0; i<fin; i++){

	    letra = palabra_intro[i];
	    
	    for (int j=0, k=0; j<16, k<16; j++, k++){

	  // p = strchr(array, letra);

	    if ((array[j] == letra) && (temporal[k] != true)){
		
		    match+=1;
		    temporal[k] = true;
		    break;
	    }
/*	printf("%c", palabra_intro[i]);
	printf("\n");
	printf("%c", letra);*/
	  
	    }
	//printf("%c", palabra_intro[i]);
	printf("\n");
	printf("%c", letra);
	   }

	printf("\n");

	for (int m=0; m<16; m++){
	    printf("%i", temporal[m]);
	}

	printf("\n");


	(match == fin)? resultado = true:resultado = false;

	printf("match:%i fin:%i resultado:%i\n", match, fin, resultado);
	printf("\n");

	/* después de hacer la búsqueda, mostramos la salida en funcuón del valor de resultado */

	switch (resultado){

	    case 0:
		
		printf("NO hay coincidencia\n");
		break;

	    case 1:
		printf("SI hay coincidencia\n");
		break;
	}


    } while (palabra_intro[0] != '\t');

    printf("\n");
    printf ("Gracias por jugar...\n");

    return EXIT_SUCCESS;

}
