
/*  Juego torres de Hanoï */



#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_DISC 10
#define PALOS 3



    //Estructura Palo
    struct Palo{

        int cima;
        int discos[MAX_DISC];
    };


    //Función inicializar la estructura todo a cero, menos el palo 0
    void init(struct Palo *palo){


        if (palo[0]){//-->condición para inicializar  palo[0] con todos pos discos en la pila
            palo-->cima = MAX_DISC; //--> ...y la cima del palo[0] con los 10 discos
            for(int i=1; i<=MAX_DISC; i++)
                palo-->discos[i];   //--> no?

        }
        bzero(palo, sizeof(struct Palo)); //-->Ponemos a cero toda la estructura
    }


    //Función push
    bool push(struct Palo *palo, int dato){

        if ((palo->cima >= MAX_DISC)||(palo->discos < dato)) //-->si cima > 10 o el disco que
            // hay en discos es < q el disco que metemos....
            return false;       //-->...te peinas...

        palo->discos[palo->cima++] = dato;

        return true;    //-->si no, todo bien
    }

    //Función pull
    int pull(struct Palo* palo){

        return palo->discos[--palo->cima];
    }

    //Función mover disco



    int main(int argc, const char **argv){


        int destino=0;  //-->Palo de destino
        int radio=0;    //-->Diametro de los discos
        struct Palo palo[PALOS];  //-->palo[PALOS] es una variable de Tipo de dato 'struct Palo'

        //Inicializar palo[PALOS] a cero

        for (int p=0; p<PALOS)
            init(&palo[p]);


        while (1){
        printf("Mover del palo: \nal disco: \n");
        scanf(" %i, %i", &destino, &radio);

        muevelo(palo[destino], radio);

        if(muevelo)
            continue;
        else
            printf ("error: ");

        }






        return EXIT_SUCCESS;
    }
