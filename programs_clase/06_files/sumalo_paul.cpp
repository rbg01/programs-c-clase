#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **agrv){

    int resultado = 0;
    int entrada;
    FILE *pf; // declaramos *pf como una vsriable puntero con tipo de dato FILE

    pf = fopen("sumas.in", "r");  // Abrimos sumas.in en modo "read"

    while(!feof(pf)){
	fscanf(pf, " %i", &entrada);
	resultado += entrada;
    }
    fclose(pf);

    printf("%i\n", resultado);





	return EXIT_SUCCESS;
}
