


  /*  Primos Recursivos Version del director  */

#include <stdio.h>
#include <stdlib.h>


bool es_primo (int candidato, int posible){

    bool respuesta;

    posible -= 1;

    if (posible == 1)
        return false;


    (candidato % posible == 0) ? respuesta = true : respuesta = es_primo(candidato, posible);


    return respuesta;
}

int main (int argc, const char **argv){


    int numero;

    scanf(" %i", &numero);

    if (es_primo(numero, numero ))
        printf("El número %i, NO primo.\n", numero);
    else
        printf("El número %i, es primo.\n", numero);


    return EXIT_SUCCESS;
}
