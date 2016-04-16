#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "functions.h"

bool push (char p, struct Stack *pila){

    pila->data[pila->cima++] = p;
    return true;
}

char pop (struct Stack *pila){

    return pila->data[--pila->cima];
}

void a_cero (struct Stack *pila){

    bzero(pila, sizeof(struct Stack));
}


