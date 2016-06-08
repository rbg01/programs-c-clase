


/*  Piramide de Batalla Normal */


#include <stdio.h>
#include <stdlib.h>

void dibuja_figura(char figura, int veces){
    for(int i=0; i<veces; i++)
        printf("%c", figura);
    return;
}

void imprime_piramide(int base, int altura){

    int veces_espacios = 10;
    int veces_asterisc = altura;



    while(veces_asterisc != base + 2){

        dibuja_figura(' ', veces_espacios);
        dibuja_figura('*', veces_asterisc);
        printf("\n");
        veces_espacios -= 1;
        veces_asterisc += 2;
    }        

    return;
}

int main(int argc, const char **argv){

    int base = 0;
    int cima;

    printf("Dame una base:\n");
    scanf(" %i", &base);

    //averiguamos la cima 
    for(int i=3; i < base; i++){
        (i % 2 != 0 )? cima = 1 : cima = 2;
        imprime_piramide( i, cima);
        printf("\n");
    }



    return EXIT_SUCCESS;
}
