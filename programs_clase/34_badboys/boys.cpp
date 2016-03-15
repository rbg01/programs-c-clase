#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAXIMO 100

struct Vector{
    double x;
    double y;
};

struct Personaje{
    struct Vector r;  //--> Dirección
    struct Vector v;  //--> Velocidad
    struct Vector a;  //--> Aceleración

};

void update_physics(struct Personaje *movil){ //movil tendrá siempre la dirección de un prota

    movil->v.x += movil->a.x;
    movil->v.y += movil->a.y;
    movil->r.x += movil->v.x;
    movil->r.y += movil->v.y;

}

void init(struct Personaje *movil){ //la dirección de un struct Personaje q se llama movil

    bzero(movil, sizeof(struct Personaje));
}

int main(int argc, const char **argv){


    struct Personaje prota[MAXIMO];


    while(1){


        for (int i=0; i<MAXIMO; i++)
            update_physics(&prota[i]);
        


    }






	return EXIT_SUCCESS;
}
