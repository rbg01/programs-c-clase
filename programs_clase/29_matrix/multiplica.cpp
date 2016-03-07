#include "multiplica.h"
#include <stdio.h>

void multiplica(int *matriz_a, int *matriz_b, int *matriz_c, int fils, int cols){ 

    int elemento=0;
    

    for ( int f=0; f<fils; f++ ){ //-->hay q multiplicar cada elem de a por el correspondiente
                                  //de b

        for ( int c=0; c<cols; c++ ){

          elemento += *(matriz_a + f*cols + c) * (matriz_b + f*cols +c);


        }
        
            *(matriz_c + f*cols +c) = elemento
    }






}

