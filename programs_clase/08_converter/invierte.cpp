#include <stdio.h>
#include <stdlib.h>

int main(){

    int origen,
        destino = 0;

    printf("Dame un Número: ");
    scanf(" %i", &origen);

    do {
        destino *= 10;
        destino += origen % 10;
        origen /= 10;
    } while (origen != 0);

    printf("%i\n", destino);






	return EXIT_SUCCESS;
}
