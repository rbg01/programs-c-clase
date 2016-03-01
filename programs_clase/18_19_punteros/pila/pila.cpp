#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define N 0x10

        /* Función sacar */
int sacar(int datos[N], int *cima) {

    (*cima)--; // con ésto movemos el puntero al aray hacia atrás
    return datos[*cima];
}

        /* Función meter */
void meter(int nuevo, int pila[N], int *cima){
    pila[*cima] = nuevo; /*metemos el nuevo dato en la posición ded dnd
                           sacamos el anterior*/
    (*cima)++; //...y movemos el puntero hacia la derecha
}


        /* Función paara ver lo que hay en la pila*/
void mostrar_estado(int pila[N], int cima, int bandeja) {
    for (int i=0; i<cima; i++)
        printf("Fila %i: %i\n", i, pila[i]);
    printf("Bandeja = %i\n", bandeja);
}



int main(int argc, const char **argv){

    int pila[N];
    int primera_pos_libre = 0;
    int entrada, salida;

    while(1){
        entrada = -1;
        printf(": ");
        scanf(" %i", &entrada);
        __fpurge(stdin);
        printf("entrada = %i\n", entrada);

        if (entrada < 0)
            salida = sacar(pila, &primera_pos_libre);
        else
            meter(entrada, pila, &primera_pos_libre);

        mostrar_estado(pila, primera_pos_libre, salida);
    }
}




return EXIT_SUCCESS;
}
