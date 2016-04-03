#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



bool comprobar_letra_a_letra(char tablero[], const char *patron, int offset){

    for (int i=0; i< (int) strlen(patron); i++)
        if (tablero[offset + i] != patron[i])
            return false;

    return true;
}

int main(int argc, const char **argv){
    char tablero[] = "arpedpedrozuloaga";
    bool palabra_encontrada = false;

    if (argc < 2){
        fprintf(stderr, "Usage: %s <patron de busqueda>\n\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (   int offset=0;
            tablero[offset + (int) strlen(argv[1])] != '\0' && !palabra_encontrada;
            offset++ )
        palabra_encontrada = comprobar_letra_a_letra(tablero, argv[1], offset);

    if (palabra_encontrada)
        printf("%s\n", argv[1]);

    return EXIT_SUCCESS;
}

