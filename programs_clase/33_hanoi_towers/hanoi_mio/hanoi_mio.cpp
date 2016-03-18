#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_DISC 10
#define MAX_PILA 10
#define MAX_PALO 3


struct Pila {

    int cima;
    int pos;
    int datos[MAX_PILA];
};


  // Función inicializar, para poner todos los campos de
  // struct pila a cero.
void init (struct Pila *pila){
    bzero(pila, sizeof(struct Pila));
}

  // Función intro
bool in_tro(struct Pila *pila, int dato){

    if (dato > MAX_PILA)
        return false;
    if (pila->cima >= MAX_PILA)
        return false;
    if (dato > pila->datos[pila->cima-1])
        return false;
    else
        pila->datos[pila->cima++] = dato;
    pila->pos_libre++;
    return true = dato;
  
}

  // Función outro
int out_tro(struct Pila *pila){

    return
}
