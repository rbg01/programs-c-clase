


/*  Clasifica unos numeros, en par o impar
 *   y los ordena de menor a mayor    */



#include <stdio.h>
#include <stdlib.h>

struct Ttabla {

    int cima;   //-->Nos indica la primera posicion libre
    int *datos; //-->Puntero a datos, que seráun aray con realloc
    int n;    //-->Tamaño del array
};

void inicializa (struct Ttabla *array){

    array->cima = 0;
    array->datos = NULL;
    array->n = 0;
}

int comprueba(int numero){

    if(numero <= 0)
        return 0;
    else if(numero % 2 == 0)
        return 1;
    else
        return -1;
}


void push (struct Ttabla *array, int numero){


    if (array->cima >= array->n){
        array->datos = (int*) realloc(array->datos, (array->cima + 1) * sizeof(int));
        array->datos[array->cima++] = numero;
        array->n = array->cima;
    }

}

void imprime(struct Ttabla *array){

    for(int i=0; i < array->n; i++)
        printf("-> %i\n", array->datos[i]);
}
int main(int argc, const char **argv){


    struct Ttabla entrada, pares, impares;
    int entry;
    bool condition = true;
    int comp;


    inicializa(&entrada);
    inicializa(&pares);
    inicializa(&impares);

    printf("Para salir introduce 0 o un valor negativo....\n");

    while(condition){

        //Si entry es negativo, salmos del bucle
        //-Escanea la entrada
        scanf (" %i", &entry);
        //-comprueba si es par o impar

        comp = comprueba(entry);

        switch(comp){
            case 1:
                push(&pares, entry);
                break;
            case -1:
                push(&impares, entry);
                break;
            case 0:
                condition = false;
                break;
        }

}
    printf("Numeros pares:\n");
    imprime(&pares);
    printf("Numeros impares:\n");
    imprime(&impares);



    return EXIT_SUCCESS;
}
