


/*  Piramide de Batalla Invertida*/

#include <stdio.h>
#include <stdlib.h>

void dibuja_figura(char figura, int veces){
    for(int i=0; i<veces; i++)
        printf("%c", figura);
    return;
}

void imprime_piramide(int base, int altura){

    int veces_espacios = 0;
    int veces_asterisc = base;

    for(altura = base; altura >= 0; altura--){
        for(base = 0; base < altura; base++){
            do{
                dibuja_figura(' ', veces_espacios);
                dibuja_figura('*', veces_asterisc);
                printf("\n");
                veces_espacios += 1;
                veces_asterisc -= 2;
            }while(veces_asterisc == base);
        }
    }
    return;
}

int main(int argc, const char **argv){

    int base, altura;

    printf("Dame una base:\n");
    scanf(" %i", &base);
    altura = base;
  


    imprime_piramide( base, altura);





	return EXIT_SUCCESS;
}
