#include "multiplica.h"
//#include <stdio.h>
//#include <stdlib.h>

void multiplica(int *matriz_a, int *matriz_b, int *matriz_c, int fils, int cols, int com){


    int parcial=0;

    for (int f_a=0; f_a < fils; f_a++){
        for (int c_b=0; c_b < cols; c_b++){
            for (int c=0; c < com; c++){
                parcial += *(matriz_a + f_a*com + c) * *(matriz_b + c*cols + c_b);
            }
            *(matriz_c + f_a*cols + c_b) = parcial;
        }
        parcial=0;
    }


}

