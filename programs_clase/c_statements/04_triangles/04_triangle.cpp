
  /* Triángulos */

#include <stdio.h>
#include <stdlib.h>


void pintar(char dibujo, int veces){

    for (int i=0; i<veces; i++)
        printf("%c", dibujo);
}

int main(int argc, const char **argv){


    int altura,
        base,
        veces_espacios = 0;
    int veces_caracter = 0;

    printf("Dime una altura: \n");
    scanf(" %i", &altura);

    base = altura + (altura - 1);
    veces_espacios = altura - 1;
    veces_caracter = altura - (altura-1);

    for (int h=0; h<altura; h++){

        pintar(' ', veces_espacios);
        pintar('O', veces_caracter);

        veces_espacios -= 1;
        veces_caracter += 2;

        printf("\n");


    }



	return EXIT_SUCCESS;
}
