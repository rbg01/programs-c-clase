
/*  Juego torres de Hanoï */



#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_DISC 10 // Diámetro máximo de disco
#define MAX_PILA 10 // Tamaño de la pila
#define PALOS 3



//Estructura Palo
struct Palo{

    int cima;
    int discos[MAX_PILA];
};


//Función inicializar la estructura todo a cero, menos el palo 0
void init(struct Palo *palo){

    bzero(palo, sizeof(struct Palo)); //-->Ponemos a cero toda la estructura
}


//Función push
bool push(struct Palo *palo, int dato){

    //-->comprobación del dato q hacemos push
    if (dato > MAX_PILA) //-->si el tamaño de discos > que el MAXIMO
        return false;       //-->...adiós...

    if (palo->cima >= MAX_PILA) //-->si la cima >= q el MAXIMO, están todos los discos
        return false; //-->...adiós..
    //-->si cima > 0 y el dato > que el que hay puesto
    if (palo->cima > 0 && dato > palo->discos[palo->cima-1])
        return false; //-->..adiós..


    palo->discos[palo->cima++] = dato;

    return true;    //-->si no, todo bien y cima++
}

//Función pull
int pull(struct Palo* palo){

    return palo->discos[--palo->cima];  //-->devuelve el disco q hay y --cima
}


//Función mover disco
void pintar(int cuanto, int dibujo){
    for (int i=0; i<cuanto; i++)
        printf("%c", dibujo);


}



int main(int argc, const char **argv){


    int destino=0;  //-->Palo de destino
    int radio=0;    //-->Diametro de los discos
    struct Palo palo[PALOS];  //-->palo[PALOS] es una variable de Tipo de dato 'struct Palo'
    int origen = 0;

    //Inicializar palo[PALOS] a cero

    for (int p=0; p<PALOS; p++)
        init(&palo[p]);

    // Ponemos en el palo[0]todos los discos
    for (int disco=5; disco>0; disco--)
        push(&palo[0], disco);


    while(1){

        system("clear");

        for (int fila=MAX_PILA-1; fila>=0; fila--) {

            for (int n_palo=0; n_palo<PALOS; n_palo++) {

                printf("\t");

                int asteriscos = palo[n_palo].discos[fila]; // el número de * es igual al tamaño del disco
                int espacios   = MAX_DISC - asteriscos;     // el número de " " es igual al diametro max - los asteriscos.

                if (fila >= palo[n_palo].cima){
                    espacios = MAX_DISC;
                    asteriscos = 0;
                }
                pintar( espacios, ' ' );
                pintar( asteriscos, '*' );
                printf("|");
                pintar( asteriscos, '*' );
                pintar( espacios, ' ' );
            }
            printf("\n");
        }

        do {
            printf("\norigen, destino: ");
            scanf(" %i, %i", &origen, &destino);
        } while(destino > PALOS || destino < 0 );

        push( &palo[--destino], pull(&palo[--origen]) );
    }






return EXIT_SUCCESS;
}
