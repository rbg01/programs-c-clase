#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int altura;

    printf ("Escoge la altura, 4 o 7.\n");
    scanf (" %i", &altura);


    if (altura == 4) {
        for (int fila=0; fila<altura; fila++){
            if ((fila==1) || (fila==2))
                printf("  ");
            
            for (int col=0; col<altura; col++){
                if ((col==1 || col==2)){
                    printf("  ");
                }else
                    printf ("* ");
                printf("\n");
            }
        }
    }


    if (altura == 7){
        for (int fila=0; fila<altura; fila++){
            for (int col=0; col<altura; col++)
                printf ("* ");
            printf("\n");
        }
    }

    return EXIT_SUCCESS;
}    
