#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_DISC 10
#define MAX_PILA 10
#define MAX_PALO 3


struct Pila {

    int cima;
    int datos[MAX_PILA];
};


  // Función inicializar, para poner todos los campos de
  // struct pila a cero.
void init (struct Pila *pila){
    bzero(pila, sizeof(struct Pila));
}


