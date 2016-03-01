#include "multiplica.h"
#include <stdio.h>

void multiplica(int *a, int *b, int *p, int fils, int cols){

    

    for ( int f=0; f<fils; f++ ){

        for ( int c=0; c<cols; c++ ){
            (*(p+f)+c * cols) = (*(a+f)+c) * (*(b+f)+ c * cols);
            
        }
    }

    

}

