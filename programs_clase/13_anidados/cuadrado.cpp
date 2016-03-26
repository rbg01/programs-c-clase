#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    

    int entrada;

    printf("dame un lado ");
    scanf(" %i", &entrada);
        
    for (int fila=0; fila < entrada; fila++){
        
            for (int col=0; col < entrada; col++)


                    printf("* ");
            printf("\n");
    }






	return EXIT_SUCCESS;
}
