#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    
    int entrada = 4;

    
    for (int fila=0; fila < entrada+1; fila++){
        
            for (int col=0; col < entrada; col++)

                if ( col<fila )
                    printf("O ");

                else
                    printf(" ");
            printf("\n");
    }






	return EXIT_SUCCESS;
}
