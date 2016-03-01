#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

        int cont = 1,
            entrada = 0;

        printf("dime un número: ");
        scanf(" %i", &entrada);

    do {

        printf("%i ", cont);
        cont += 1;

    } while(entrada != (cont-1));



	return EXIT_SUCCESS;
}
