#include <stdio.h>
#include <stdlib.h>

#define TAMAN 100

bool es_primo(int candidato){

    /* tengo que comprobar si el candidato es multiplo de algún
     * número primo 2, 3, 5 o 7, para descartar unos cuantos
     * ; y luego comprobar si es divisible entre si mismo y la unidad*/

    int primos[] = {2,3,5,7};
    bool resultado;


    for (int i=0; i<4; i++){
        if(((candidato % primos[i]) != 0) &&
                ((candidato / candidato) == 1) &&
                ((candidato / 1) == candidato)){

            resultado = true;
        }else
            resultado = false;

    }

  return resultado;
}


int main(int argc, const char **argv){





    return EXIT_SUCCESS;
}
