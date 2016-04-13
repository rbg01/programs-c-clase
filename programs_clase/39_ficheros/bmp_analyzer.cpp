#include <stdio.h>
#include <stdlib.h>

#define ANALYZED_FILE "*.bmp"

struct Analiza{

    /*
     * -Tipo:
     * -Tamaño:
     * -Tamaño cabecera:
     * -Anchura:
     * -Altura:
     * -Compresión:
     * -Resolución H:
     * -Resolución V:
     * -Tamaño Paleta:
    */
}

int main(int argc, const char **argv){


    FILE *pf = NULL;


    //-->Error messages
    if (argc < 2){
        fprintf(stderr, "Usage: %s <File to scan>\n\n", argv[0]);
        return EXIT_FAILURE;
    }

    if ( !(pf = fopen(SCORE_FILE, "r"))  ){
        fprintf(stderr, "File %s not found.\n", ANALYZED_FILE);
        return EXIT_FAILURE;
    }











    fclose(pf);

    return EXIT_SUCCESS;

}
