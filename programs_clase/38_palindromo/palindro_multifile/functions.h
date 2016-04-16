#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__


#define N 0x100

struct Stack{
    char data[N];
    int cima;
};


extern bool push(char p, struct Stack *pila);
extern char pop (struct Stack *pila);
extern void a_cero (struct Stack *pila);

#endif


