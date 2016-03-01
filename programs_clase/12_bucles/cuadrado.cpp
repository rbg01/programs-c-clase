#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    char asterisk = '*';
    int entrada;

    printf("dame un lado ");
    scanf(" %i", &entrada);
        
    for (int i=0; i < entrada; i++){
        
            for (int i=0; i < entrada; i++)
            printf("%c ", asterisk);
	    printf("\n");
    }






	return EXIT_SUCCESS;
}
