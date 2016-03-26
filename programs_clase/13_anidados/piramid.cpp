#include <stdio.h>
#include <stdlib.h>

#define GROSOR 1


void dibuja(char dibujo, int veces){

    for(int i=0; i<veces; i++)
    printf("%c", dibujo);
}

int main(int argc, const char **argv){

    int altura,
        base,
	h;
	
    int veces_espacios,
        veces_asterisc;

    printf("dame una altura: \n");
    scanf(" %i", &altura);
    base = altura * 2;

    veces_espacios = altura - GROSOR;
    veces_asterisc = GROSOR * 2;

    for (h=0; h<altura; h++){

        dibuja(' ', veces_espacios);
        dibuja('*', veces_asterisc);
        dibuja(' ', veces_espacios);

        veces_espacios -= 1;
        veces_asterisc += 2;
 
            printf("\n");
    }






	return EXIT_SUCCESS;
}
