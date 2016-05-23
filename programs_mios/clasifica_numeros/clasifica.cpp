


  /*  Clasifica unos numeros, en paro impar
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

bool comprueba(int numero){

    if(numero % 2 == 0)
        return true;
    else
        return false;
}


void push (struct Ttabla *array, int numero){


    if (array->cima >= array->n)
        array->datos = (int*) realloc(array->datos, (array->cima + 1) * sizeof(int));
    array->datos[array->cima++] = numero;
    array->n = array->cima;

}

void imprime(struct Ttabla *array){
    
    for(int i=0; i < array->n; i++)
        printf("-> %i\n", array->datos[i]);
}
int main(int argc, const char **argv){


    struct Ttabla entrada, pares, impares;
    int entry;
    bool condition = true;


    inicializa(&entrada);
    inicializa(&pares);
    inicializa(&impares);

    printf("Para salir introduce un valor negativo....\n");

    while(condition){
 
        //Si entry es negativo, salmos del bucle
        //-Escanea la entrada
        scanf (" %i", &entry);
        //-comprueba si es par o impar

        if(entry <= 0)
            condition = false;


        //-guardalo en el array correspondiente
        if(comprueba(entry))
            push(&pares, entry);
        else
            push(&impares, entry);


    }

    printf("Numeros pares:\n");
    imprime(&pares);
    printf("Numeros impares:\n");
    imprime(&impares);



	return EXIT_SUCCESS;
}
