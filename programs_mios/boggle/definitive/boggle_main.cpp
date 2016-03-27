#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>
#include <string.h>
#include "functions.h"

#define MAXTABL 4
#define MAXDAD 16
#define DADOCARAS 6
#define ESC 27



int main(int argc, const char **argv){

    srand(time(NULL));

        const char DADOS[MAXDAD][DADOCARAS] = {
        {'H','F','S','I','E','E'},
        {'R','F','X','I','O','A'},
        {'N','S','R','H','I','E'},
        {'Z','N','D','V','A','E'},
        {'P','L','S','T','U','E'},
        {'T','A','A','E','I','O'},
        {'L','W','R','U','I','E'},
        {'C','R','A','L','E','S'},
        {'S','I','R','M','O','A'},
        {'K','E','U','N','O','T'},
        {'Q','M','B','J','A','O'},
        {'B','T','L','R','A','I'},
        {'D','M','C','P','A','E'},
        {'G','N','L','Y','U','E'},
        {'S','N','D','T','O','E'},
        {'V','T','N','G','E','I'}
    };


       char letras[MAXTABL][MAXTABL],
	 tablero[MAXTABL][MAXTABL];
       char respuesta;

    system ("clear");


    printf("\t\t*** BOGGLE***\n"
	    "\tConsiste en formar palabras, las\n"
	    "\tpalabras pueden ser como quieras de largas\n"
	    "\tpuedes ir en cualquier dirección, pero NO\n"
	    "\tpuedes repetir casilla......\n");

    printf("\n");
    printf("\tPara jugar pulsa s/n\n\t");
    scanf("\t %c", &respuesta);

   while(getchar() != ESC){

	printf("\tGenerando Tablero....\n");
	progress();
        printf("\n");
        tira_dados(DADOS, letras);

	//desordenar letras
	qsort(letras, 15, sizeof(char), cmpfunc);

	pintar_tablero(letras);
     


    }
  
    printf("\t.....gracias por jugar.....\n");
    return EXIT_SUCCESS;

}
