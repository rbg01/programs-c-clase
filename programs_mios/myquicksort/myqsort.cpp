#include <stdio.h>
#include <stdlib.h>

#define MAX 15

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
    int limit;

    limit = fin-1;

    for(int i=0; i < limit; i++){
    while(drch < limit){

        if(datos[izq] <= datos[drch]){
            izq++;
            drch++;
        
        }
    
            intercambia(datos, izq, drch);
            imprime(datos);

          // max_num(datos, limit);

        }
    }

   printf("izq=%i, drch=%i\n", izq, drch); 
    return;

}

int main(int argc, const char **argv){


    int datos[MAX] = {4, 5, 8, 6, 10, 3, 2, 7, 1, 15, 12, 9, 1, 10, 25};

    imprime(datos);

 //  for(int i=0; i <= MAX; i++)
        max_num(datos, MAX);
   
    imprime(datos);





	return EXIT_SUCCESS;
}
