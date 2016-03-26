#include <stdio.h>
#include <stdlib.h>

#define GROSOR 1


void imprime(char dibujo){

    printf("%c ", dibujo);
}


int main(int argc, const char **argv){


  
    int ancho;
    int alto; 

    printf("Dime una altura: ");
    scanf(" %i", &alto);
    printf("Dime una anchura: ");
    scanf(" %i", &ancho);

    for (int fila=0; fila < alto; fila++){

        for (int col=0; col < ancho; col++){

            if((fila > 0 && fila < alto-GROSOR) && (col > 0 && col < ancho-GROSOR))
                imprime('O');
            else
                imprime('*');



        }

        printf("\n");
    }



    return EXIT_SUCCESS;
}
