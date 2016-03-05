#include <stdio.h>
#include <stdlib.h>

    /* Estructura Pila */
struct Pila {   // tipo de dato 'struct Pila'
    int *data;  //puntero a un int q será una pila gracias a 'realloc'
    int primera_posicion_libre; //int a primera_pos_libre
    int n;      // Tamaño de la pila
};

    /* función push --->Devuelve bool
     * 'struct Pila *pila' ---> Puntero a un tipo d dato 'struct Pila'
     * 'int numero ---> Número introducido */
bool push(struct Pila *pila, int numero){
    printf("PUSH %i\n", numero);
    // Si el contenido de primera_pos_libre >= q el tamaño :
    if (pila->primera_posicion_libre >= pila->n){
        //reserva dinámica de memoria para el campo data:
        //con realloc(<direccion>,<tamaño>), si <direccion> es NULL
        //funciona como malloc
        pila->data = (int *) realloc(
                pila->data,//--->Dirección
                (pila->primera_posicion_libre + 1) * sizeof(int)//--->Tamaño
                );
            //Asignamos a tamaño el valor d primera_pos_libre
        pila->n = pila->primera_posicion_libre;
        printf("Nuevo tamaño pila = %i\n", pila->n);
    }
    //Asignamos 'numero' al campo data[0] y luego, primera_posicion_libre=1
    //entonces la siguiente vez que llamemos a PUSH se culplira el if().
    pila->data[pila->primera_posicion_libre++] = numero;
    return true;
}

    /* Función pop --->Devuelve un int q es en num q sacamos
     * 'struct Pila *pila' ---> Puntero a un tipo d dato 'struct Pila'*/
int pop(struct Pila* pila) {
    //printf("POP\n");
    //printf("POP %i\n", pila->data[(pila->primera_posicion_libre)]);
    if (pila->primera_posicion_libre <= 0){

        printf("No posible POP,only PUSH\n");
        return 0;
    }
    printf("Nuevo tamaño pila = %i\n", pila->primera_posicion_libre);
    return pila->data[--(pila->primera_posicion_libre)];
}

  /*  Función iniciar --->devuelve void
   *  struct Pila *pila ---> Puntero a un tipo d dato 'struct Pila'*/
void iniciar(struct Pila *pila){

    pila->data = NULL;  // Inicializar a NULL siempre!! cualquier dirección
    pila->n = 0;        // Tamaño pila = 0
    pila->primera_posicion_libre = 0;//Primera_pos_libre=0
}

int main(int argc, const char **argv){

    int resultado;

    struct Pila mesa;
    iniciar(&mesa);



    push(&mesa, 5);
    push(&mesa, 7);
    //resultado = pop(&mesa);
    push(&mesa, 3);
    push(&mesa, 6);
    push(&mesa, 4);

    resultado = pop(&mesa);
    resultado = pop(&mesa);
    //printf("Resultado = %i\n", resultado);
    for (int i=0; i<mesa.primera_posicion_libre; i++)
        printf(" %i", mesa.data[i]);
    printf("\n");

    return EXIT_SUCCESS;
}




