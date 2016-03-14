
/*Rellenar una matriz m X n, reservando espacio en cada pasada*/

#include <stdio.h>
#include <stdlib.h>


void set(int *matriz, int fila, int col, int dato, int ancho){


             *(matriz+(fila * ancho + col)) = dato;

}

int get(int *matriz, int fila, int col, int ancho){
    int dato=0;


            dato = *(matriz+(fila * ancho + col));



    return dato;
}

int main(int argc, const char **argv){

    int *a = NULL;
    int filas, col; // Preguntar al usuario.
    int buffer=0; //--> El dato que introdicimos.
    int ancho=0; //-->para la formula de direccionamiento.

    system("clear");

    printf ("filas = ");
    scanf (" %i", &filas);
    printf("\n");
    printf ("columnas = ");
    scanf (" %i", &col);
    ancho = col;

    //reservar espacio para a



    // Bucle para solicitar la entrada

        for (int f=0; f<filas; f++)
            for (int c=0; c<col; c++){
                printf("(%i, %i)", f+1, c+1);
                scanf(" %i", &buffer);
                a = (int *) realloc(a, (filas * ancho + col)*sizeof(int));
                set(a, f, c, buffer, ancho);
            }


    // Imprimir la matriz usando get
 
        for (int f=0; f<filas; f++){
            printf ("\n");
            for (int c=0; c<col; c++)
                printf("%i ", get(a, f, c, ancho));
        }


 

   

    // Liberar espacio para a
    free(a);

    return EXIT_SUCCESS;
}

