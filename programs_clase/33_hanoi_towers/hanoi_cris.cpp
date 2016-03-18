#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_PILA 9
#define MAX_DISCO MAX_PILA
#define PALOS 3

struct Pila {
    int cima;
    int data[MAX_PILA];
};

void inicializar(struct Pila *pila){
    bzero(pila, sizeof (struct Pila));
}

int pop(struct Pila *palo){
    palo->data[palo->cima] = 0;
    return palo->data[--palo->cima];
}

bool push(struct Pila *palo, int dato){

    /*if(palo->data[palo->cima-1] <= dato && palo->cima != 0)
     *       return false;//Si ya existe. Pero ya se han inicializado antes todas.*/

    /*if (palo->cima >= MAX_PILA)
     *       return false;*/

    palo->data[palo->cima] = 0;
    palo->data[palo->cima++] = dato;
    return true;
}

void pinta(int cuanto, char dibujo){
    for(int i = 0; i < cuanto; i++)
        printf("%c", dibujo);
}

/*bool check(struct Pila palo[PALOS], int disco){
 *   for(int palete = 0; palete < PALOS; palete ++)
 *     for(int fila = 0; fila < MAX_PILA; fila ++){
 *       if(palo[palete].data[fila] == disco)
 *         return true;
 *           }
 *             return false;
 *               }*/

int colocar_discos(struct Pila * pila){
    for(int numero = MAX_PILA; numero > 0; numero--){
        pila->data[pila->cima++] = numero;
    }
    return pila->data[pila->cima--];
}

int pos_libre(struct Pila * palo){
    for(int fila = 0; fila < MAX_PILA; fila++)
        if(fila == 0)
            return palo->data[palo->cima];
}

int main(int argc, const char **argv){
    //Dibuja circulos. Pide el radio y se guarda como: ej. 5 → guardar *****|*****      siento | el centro.
    int n_discos = 0,
        destino = 0,
        radio = 0;
    struct Pila palo[PALOS];

    for (int p=0; p<PALOS; p++)
        inicializar(&palo[p]);

    /*system("clear");
     *       printf("Número de discos (1-9): ");*/
    colocar_discos(&palo[0]);

    while(1){

        system("clear");
        //Para cada fila
        printf("\n\n");
        for(int fila = MAX_PILA-1; fila >= 0; fila--){

            for(int n_palo = 0; n_palo < PALOS; n_palo++){
                printf("\t");
                int asteriscos = palo[n_palo].data[fila];
                int espacios = MAX_DISCO - asteriscos;
                pinta(espacios, ' ');
                pinta(asteriscos, '@');
                printf("|");
                pinta(asteriscos, '@');
                pinta(espacios, ' ');
            }

            printf("\n\n");
        }
        printf("\n");
        do{
            printf("palo, disco: ");
            scanf(" %i, %i", &destino, &radio);
        }while(destino <= 0 || destino > PALOS || radio <= 0 || radio > MAX_DISCO);

        for(int palito = 0; palito < PALOS; palito ++){
            for(int fila = 0; fila < MAX_PILA; fila ++)
                if(palo[palito].data[fila] == radio)
                    if(palo[destino].data[0] == 0 || palo[destino].data[pos_libre(&palo[destino])] > palo[palito].data[fila])
                        if (palo[palito].cima < MAX_PILA + 1){

                            pop(&palo[palito]);
                            push(&palo[--destino], radio);
                        }

        }
    
}
return EXIT_SUCCESS;
}

