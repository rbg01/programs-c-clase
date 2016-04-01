#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    char tablero[] = {'x','w','p','a','j','b','p','a','c','h','p','a','c','o','a','r','\0'};
    char palabra[] = {'p','a','c','o','\0'};
    int encontrar = 0;
    int buscar = 0;
    int fin = 4;
    int match = 0;

/*
    for (int i=0; tablero[i] != '\0'; i++){
        printf("%c , %c", tablero[i], palabra[i]);

    }
    */


    for(buscar, encontrar; buscar<fin, encontrar != '\0'; buscar++, encontrar++ ){
        if(tablero[encontrar] == palabra[buscar]){
            encontrar += 1;
            buscar += 1;
            match += 1;
        
        else if(buscar != 0){
            encontrar == encontrar;
            buscar = 0;
        
        }else
            encontrar += 1;
            buscar = 0;
        
        
        
        printf("NO");
        }
    }


    if(match == fin)
    printf("Palabra NO encontrada.%i\n", match);
    else printf("Palabra encontrada.\n");
    printf("%i %i", buscar, fin);



	return EXIT_SUCCESS;
}
