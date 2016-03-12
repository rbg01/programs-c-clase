#include <stdio.h>
#include <stdlib.h>

#define FIL_A 4
#define COMUN 3
#define COL_B 5

/*void rellenar(int *matrix, int fils, int cols, const char *nombre);
void imprimir(int *matrix, int fils, int cols, const char *nombre);
void multiplica(int *matriz_a, int *matriz_b, int *matriz_c, int fils, int cols, int com);
*/


void rellenar(int *matriz, int filas, int col, const char *nombre){
    int entrada;

    printf("Rellena los valores de la matriz %s.\n", nombre);

    for (int f=0; f<filas; f++)
        for (int c=0; c<col; c++){
            printf("(%i, %i): ", f + 1, c + 1);
            scanf(" %i", &entrada);
            *(matriz + f*col + c) = entrada;
        }
}

void imprimir(int *matriz, int filas, int col, const char *nombre){

    printf("\n%s\n\n", nombre);

    for (int f=0; f<filas; f++){
        for (int c=0; c<col; c++)
            printf("\t%i ", *(matriz + f*col + c)) ;
        printf("\n");
    }
}

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





int main(int argc, const char **argv){

    int matriz_a[FIL_A][COMUN],
        matriz_b[COMUN][COL_B],
        matriz_prod[FIL_A][COL_B];


    system("clear");

    rellenar((int *)matriz_a, FIL_A, COMUN, "primera: A");
    imprimir((int *)matriz_a, FIL_A, COMUN, "A");
    rellenar((int *)matriz_b, COMUN, COL_B, "segunda: B");
    imprimir((int *)matriz_b, COMUN, COL_B, "B");


    multiplica((int *) matriz_a, (int *) matriz_b, (int *) matriz_prod, FIL_A, COL_B, COMUN);


    imprimir((int *)matriz_prod, FIL_A, COL_B, "P");



    return EXIT_SUCCESS;
}
/*
void rellena(int *matriz, int filas, int col, const char *nombre){
    int entrada;

    printf("Rellena los valores de la matriz %s.\n", nombre);

    for (int f=0; f<filas; f++)
        for (int c=0; c<col; c++){
            printf("(%i, %i): ", f + 1, c + 1);
            scanf(" %i", &entrada);
            *(matriz + f*col + c) = entrada;
        }
}

void imprime(int *matriz, int filas, int col, const char *nombre){

    printf("\n%s\n\n", nombre);

    for (int f=0; f<filas; f++){
        for (int c=0; c<col; c++)
            printf("\t%i ", *(matriz + f*col + c)) ;
        printf("\n");
    }
}

*/
