



  /*  Imprime Recursivo */

#include <stdio.h>
#include <stdlib.h>

void imprime (char *frase){

    static int i = 0;

    if (*(frase + i) == '\0'){
        printf("\n");
        return;
    }


    printf ("%c", *(frase + i));

    i += 1;

    imprime(frase);

}


int main (int argc, const char **argv){

    char frase[] = {"dabale arroz a la zorra el abad"};

    imprime(frase);
    
    return EXIT_SUCCESS;

}
