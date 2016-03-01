#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int lado;

    printf ("Dame un lado: ");
    scanf (" %i", &lado);

    for (int cont=1; cont <= lado; cont++){

	for (int fila=0; fila < cont; fila++){

	    for ( int col=0; col < cont; col++)
		printf("* ");
	    printf("\n");
	}
printf("\n");
    }





	return EXIT_SUCCESS;
}
