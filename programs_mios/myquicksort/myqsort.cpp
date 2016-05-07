#include <stdio.h>
#include <stdlib.h>

#define MAX 14

void intercambia(int datos[MAX], int pos1, int pos2){

    int aux = datos[pos1];
    datos[pos1] = datos[pos2];
    datos[pos2] = aux;

    return;

}

void  imprime(int datos[MAX]){

    for(int i=0; i<MAX; i++)
        printf("%i ", datos[i]);

    printf("\n");

    return;

}

void max_num(int datos[MAX], int fin){

    int izq = fin - fin;
    int drch = izq + 1;
    static  int limit;

    limit = fin - 1;

    do{

        //printf("izq=%i, drch=%i, limit=%i, fin=%i\n", izq, drch, limit, fin); 

        if(datos[izq] <= datos[drch]){
            izq++;
            drch++;

        }

        intercambia(datos, izq, drch);
        imprime(datos);

    }while(drch < limit);

    if(limit ==izq+1)
        max_num(datos, fin-1);



    printf("izq=%i, drch=%i, limit=%i, fin=%i\n", izq, drch, limit, fin); 
    return;

}

int main(int argc, const char **argv){


    int datos[] = {4, 5, 8, 6, 10, 3, 13, 7, 15, 12, 9, 1, 10, 2 };

    imprime(datos);

    max_num(datos, MAX);


    imprime(datos);





    return EXIT_SUCCESS;
}
