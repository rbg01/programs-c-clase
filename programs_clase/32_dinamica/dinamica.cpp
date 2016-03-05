#include <stdio.h>
#include <stdlib.h>

/*Tipo de estructura pila*/
struct Pila {
    int *datos;  //puntero a un int *data--> le iremos reservando memoria y lo haremos array.
    int primera_pos_libre;
    int tamano;
};

/*Función push--> Devuelve true/false
 * Argumentos:..> variable 'pila' es del tipo 'struct *Pila */
bool push (struct Pila *pila, int numero){

    if (pila->primera_pos_libre >= pila->tamano){
        //reserva dinamica de memoria:
        pila->datos = (int*) realloc(pila->datos, (pila->primera_pos_libre + 1) + sizeof(int));
        pila->tamano = pila->primera_pos_libre;

    }

    pila->datos[pila->primera_pos_libre++] = numero;

    printf("PUSH %i \nNuevo tamaño de pila %i\n", numero, pila->tamano);

    return true;

}

/*Función pull-- DEvuelve true/false*/
bool  pull (struct Pila *pila){

    int fuera=0;

    if(pila->primera_pos_libre <= 0)
        return 0;

    fuera = pila->datos[pila->tamano--];
    pila->primera_pos_libre--;

    printf("POP %i \nNuevo tamaño de pila %i\n", fuera, pila->tamano);

    return true;


}

/*iniciar la estruct pila*/
void iniciar(struct Pila *pila){

    pila->datos = NULL;
    pila->primera_pos_libre = 0;
    pila->tamano = 0;
}

int main(int argc, const char **argv){
  

    int entrada;
    char eleccion,m,s,x;
    struct Pila table;

    system("clear");

    iniciar(&table);

    do{

    printf("Quieres Meter , o Sacar?\n(M/S)\n(Para salir X)");
    scanf(" %c", &eleccion);

    if (eleccion==m){
            printf("dime un número \n");
            scanf(" %i", &entrada);
            push(&table, entrada);
            break;
    }else if (eleccion==s){
            pull(&table);
            break;
    }//else if (eleccion==x)
            //break;


    }while(eleccion != x);






    /*push(&table, 5);
    push(&table, 7);
    push(&table, 3);
    push(&table, 6);
    push(&table, 4);
    pull(&table);
    pull(&table);
    push(&table, 10);*/


    for (int i=0; i<table.primera_pos_libre; i++)
                printf(" %i", table.datos[i]);
        printf("\n");


    return EXIT_SUCCESS;
}
