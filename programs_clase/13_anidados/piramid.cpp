#include <stdio.h>
#include <stdlib.h>


void dibuja(char dibujo){

    printf("%c ", dibujo);
}

int main(int argc, const char **argv){

    int lado,
	fila,
	col;

    printf("dame un lado ");
    scanf(" %i", &lado);
      
    for (fila=0; fila<lado; fila++){
      
            for (col=0; col<fila; col++)
            dibuja('*');
            printf("\n");

            

	
    }






	return EXIT_SUCCESS;
}
