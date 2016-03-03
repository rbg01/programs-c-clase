#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMAN 100


bool es_primo(int candidato){

    /* tengo que comprobar si el candidato tiene algún divisor
     * desde 1 hasta el candidato, si tiene más de dos divisores,
     * el número NO es primo, si tiene dos divisores(o uno en el
     * del número 1), SI es primo*/


    bool resultado;
    int divisores = 0;


    for (int i=2; i < candidato+1; i++){

        if (candidato%i == 0)
            divisores += 1;
    }

        if ( divisores == 2) 


            resultado = true;
        else
            resultado = false;





  return resultado;
}


int main(int argc, const char **argv){

    int numeros[TAMAN];
    int result;

    srand(time(NULL));

    /* LLenar el array de números aleatorios*/

    for (int i=0 ;i<TAMAN ; i++)
        numeros[i] = (rand()%100);



    for (int i=0; i<TAMAN ; i++){
        result = es_primo(numeros[i]);

        switch (result){

            case 1:
                printf ("el número %i, es primo\n", numeros[i]);
                break;

            case 0:
                printf ("el número %i, no es primo\n", numeros[i]);
                break;

        }


    }





    return EXIT_SUCCESS;
}
