#include<stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>

#define N 0x10

        /* Función sacar: le metemos la pila, y un puntero a un entero
         * que será la primero_posicion_libre */
int sacar(int datos[N], int *cima) {


      /*añadimos detección para no sacar más números de la cuenta.
       * si el elemento al que apunta cima es el último elemento
       * de la pila,,no podemos sacar más*/
    if (*cima == datos[0]){
        printf("No hay más números que sacar!!\nSólo meter!!\n");
        return 0;
    }else
        (*cima)--; // con ésto movemos el puntero al aray hacia atrás
    return datos[*cima];
}

        /* Función meter: le mandamos el numero a introducir,
         * la plila, y un puntero a la primera_posicion_libre */
void meter(int nuevo, int pila[N], int *cima){
    pila[*cima] = nuevo; /*metemos el nuevo dato en la posición dd dnd
                           sacamos el anterior*/
    (*cima)++; //...y movemos el puntero hacia arriba,
   // señalando a la siguiente posición libre
}


        /* Función paara ver lo que hay en la pila: le mandamos la pila,
         * un entero que será la posicion libre, para imprimir hasta ahí,
         * y un numero 'bandeja' que es el último numero q sacamos de la pila */
void mostrar_estado(int pila[N], int cima, int bandeja) {
    for (int i=0; i<cima; i++)
        printf("Fila %i: %i\n", i, pila[i]);
    printf("Bandeja = %i\n", bandeja);
}



int main(int argc, const char **argv){

    int pila[N];
    int primera_pos_libre = 0;
    int entrada, salida;

    do{

        printf(": ");
        scanf(" %i", &entrada);
        fpurge(stdin);
        printf("entrada = %i\n", entrada);

        if (entrada < 0)
            salida = sacar(pila, &primera_pos_libre);
        else
            meter(entrada, pila, &primera_pos_libre);

        mostrar_estado(pila, primera_pos_libre, salida);
    }while(1);





return EXIT_SUCCESS;
}




