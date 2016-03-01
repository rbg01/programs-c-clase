#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int fila = 0,
	col = 0;

    for (fila; fila<4; fila++){

	for (col; col<4; col++){

	    if (((fila>=1)||(fila<=2))||((col>=1)||(col<=2)))
		printf ("  ");
	    else
		printf("* \n");
	    printf ("\n");
	}

    }





	return EXIT_SUCCESS;
}
