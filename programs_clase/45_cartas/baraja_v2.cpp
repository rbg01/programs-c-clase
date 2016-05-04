

/*  Barajear cartas */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*  Enumeramos los palos de las cartas para trabajar mejor con ellos*/
enum Palo { oros, copas, espadas, bastos };
enum Numero {as,
    uno,
    dos,
    tres,
    cuatro,
    cinco,
    seis,
    siete,
    sota,
    caballo,
    rey
};


/*  Declaramos un array const char con los nombres de los palos */
const char *nombre_palo[] = {"oros", "copas", "espadas", "bastos"};

const char *nombre_numero[] = {"as",
    "dos",
    "tres",
    "cuatro",
    "cinco",
    "seis",
    "siete",
    "sota",
    "caballo",
    "rey"
};

/*  struct tipo Carta */
struct Carta {

    enum Numero numero;
    enum Palo palo;
};

/*  inicializamos la barara[40] con cada palo del 1 - 10   */
void inicializa (struct Carta baraja[40]){

    int carta;

    for(int palo=0; palo<4; palo++)
        for(int num=0; num<10; num++){
            carta = 10 * palo + num;
            baraja[carta].numero = (enum Numero) num;
            baraja[carta].palo = (enum Palo) palo;
        }
}

void imprimir(struct Carta baraja[40]){

    for(int carta=0; carta<40; carta++)
        printf("\t%s de %s\n.", nombre_numero[baraja[carta].numero], nombre_palo[baraja[carta].palo]);
    printf("\n");
}


void barajea(struct Carta baraja[40]){

    for(int i=0; i<1000; i++){

        struct Carta aux;

        int uno = rand() % 40;
        int dos = rand() % 40;

        aux = baraja[uno];
        baraja[uno] = baraja[dos];
        baraja[dos] = aux;
    }


}


int main(int argc, const char **argv){

    srand(time(NULL));
    struct Carta baraja[40];

    inicializa(baraja);
    imprimir(baraja);
    barajea(baraja);
    imprimir(baraja);





    return EXIT_SUCCESS;
}
