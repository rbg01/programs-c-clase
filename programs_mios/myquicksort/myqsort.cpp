#include <stdio.h>
#include <stdlib.h>



void intercambia(int datos[], int pos1, int pos2){

    int aux = datos[pos1];
    datos[pos1] = datos[pos2];
    datos[pos2] = aux;

    return;

}

void  imprime(int datos[], int fin){

    for(int i=0; i<fin; i++)
        printf("%i ", datos[i]);

    printf("\n");

    return;

}

void max_num(int datos[], int fin){

    for(int pasada=0; pasada<fin-1; pasada++){
        int izq = 0;
        int drch = 1;


        do {

            printf("izq=%i, drch=%i, fin=%i\n", izq, drch, fin); 

            printf("\n");


            if(datos[izq] > datos[drch])
                intercambia(datos, izq, drch);
            izq++;
            drch++;

            imprime(datos, fin );

        } while(drch < fin);
        printf("izq=%i, drch=%i, fin=%i\n", izq, drch, fin); 
    }
}

int main(int argc, const char **argv){


    //  int datos[] = {4, 5, 8, 6, 10, 3, 13, 7, 15, 12, 9, 1, 10, 2 };
    int datos[] = {6, 1, 8, 12, 54, 4 ,10, 2, 3, 25, 4 };
    int max = sizeof(datos) / sizeof(int);

    imprime(datos, max);

    max_num(datos, max);

    imprime(datos, max);

    return EXIT_SUCCESS;
}
