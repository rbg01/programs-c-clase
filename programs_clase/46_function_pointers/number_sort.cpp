#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

int datos[MAX];
int cima = 0;

void imprime(int *datos){

    for(int i=0; i<cima; i++)
        printf("%i ", datos[i]);
    printf("\n");

}

int menor_mayor(int num_1, int num_2){

    if(num_1 < num_2)
        return -1;

    if(num_1 == num_2)
        return 0;

    return 1;

}

int mayor_menor(int num_1, int num_2){

    if(num_1 < num_2)
        return 1;

    if(num_1 == num_2)
        return 0;

    return -1;
}

void cambia(int *datos, int pos_1, int pos_2){

    int aux = datos[pos_1];
    datos[pos_1] = datos[pos_2];
    datos[pos_2] = aux;

}

void opera(int *datos, int inicio, int fin, int (*metodo)(int numero_1, int numero_2)){

    for(int ordenado=inicio; ordenado<fin; ordenado++)
        for(int buscado=ordenado+1; buscado<fin+1; buscado++){
            if(metodo(datos[ordenado],datos[buscado]) == 1)
                cambia(datos, ordenado, buscado);
        }



}

int main(int argc, const char **argv){

    int buffer = 0;

    void (*ordena)(int *datos, int init, int end, int(*metodo)(int, int));


    while (scanf(" %i", &buffer) != EOF)
                datos[cima++] = buffer;

    ordena = opera;

    imprime(datos);

    opera(datos, 0, cima-1, mayor_menor);

    imprime(datos);

    opera(datos, 0, cima-1, menor_mayor);

    imprime(datos);






	return EXIT_SUCCESS;
}
