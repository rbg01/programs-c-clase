



    /*  Ordear lista de números recursivamente  */

#include <stdio.h>
#include <stdlib.h>


void compruebalo_paul(int *panum, int *pbnum, int longitud){


    int n = 0;
    int m = 1;
    int cambia;

    do {
        if(*(panum + n) <= *(pbnum + m)){
            n += 1;
            m += 1;
        }

        cambia = *(panum + n);
        *(panum + n) = *(pbnum + m);
        *(pbnum + m) = cambia;

        compruebalo_paul(panum, pbnum, longitud);

    }while (m <= longitud);

    return;
}

int main (int argc, const char **argv){

    int numeros[] = {3, 7, 1, 9, 2, 1, 4, 2, 5};
    int longitud = 8;
    int *panum, *pbnum;

    panum = numeros;
    pbnum = numeros;

    compruebalo_paul(panum, pbnum, longitud);

    for (int i=0; i<longitud; i++)
        printf("%i", numeros[i]);

    printf("\n");

    return EXIT_SUCCESS;

}
