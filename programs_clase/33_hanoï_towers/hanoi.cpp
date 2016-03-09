#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_DISC 10
#define PALOS 3

int main(int argc, const char **argv){

    //Estructura Palo
struct Palo{

    int cima;
    int discos[MAX_DISC];
};


  //Función inicializar la estructura todo a cero
void init(struct Palo *palo){

    bzero(palo, sizeof(struct Palo)); //-->Ponemos a cero toda la estructura
}


  //Función push
bool push(struct Palo *palo, int dato){

    if (palo->cima >= 10)
        return false;
    palo->discos[palo->cima++] = dato;

    return true;
}

  //Función pull
int pull(struct Palo* palo){

    return palo->discos[--palo->cima];
}


int main(int argc, const char **argv){


  int destino=0;  //-->Palo de destino
  int radio=0;    //-->Diametro de los discos
  struct Palo palo[PALOS];  //-->palo[PALOS] es una variable de Tipo de dato 'struct Palo'

    //Inicializar palo[PALOS] a cero

  for (int p=0; p<PALOS)
      init(&palo[p]);







	return EXIT_SUCCESS;
}
