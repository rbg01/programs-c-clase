/* Calcular numeros perfectos */

#include <stdio.h>
#include <stdlib.h>

#define N 5

bool es_perfecto(int candidato){

    int sum_div=0;

    for (int posible=1; posible<=candidato/2; posible++)
        if (candidato % posible == 0)
            sum_div += posible;
    //si el candidato == 1 y candidato = suma de los divisores, 
    //tenemos un númer perfecto
    return candidato == 1 || candidato == sum_div;

}

int main(int argc, const char **argv){


    int encontrados = 0;
    int este_numero = 1;

    int perfecto[N];

    while (encontrados < N)
        if (es_perfecto(este_numero++))
            perfecto[encontrados++] = este_numero - 1;

    for (int i=0; i<N; i++)
        printf(" %i", perfecto[i]);

    printf("\n");







    return EXIT_SUCCESS;
}
