

/*  Calcula el número e   */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){


    float  resultado = 2.0 ;

    int termino = 7;


    for (int cont=2; cont <= termino; cont++){

        int parcial = 1;
        for(int factorial=cont; factorial >=  1; factorial--){
            parcial *= factorial; 
        }
        resultado += (1 / parcial);

        printf("%i\n", parcial);


        printf("%.20lf\n", resultado );    
    }











    return EXIT_SUCCESS;
}
