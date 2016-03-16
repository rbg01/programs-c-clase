#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *pf; // Declaramos *pf como una variable puntero tipo FILE

    pf = fopen("lyrics.txt", "w"); //abrir archivo lyrics.txt en modo w

    fprintf(pf, "in the summer time\n"
	    "when the weather is fine\n"
	    "You women, you got women in\n"
	    "your mind.\n\n");
    fclose(pf);





	return EXIT_SUCCESS;
}
