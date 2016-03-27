#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tira_dados(const char *dados,char *letras){

 
    int dad=0;

    for (int fil=0; fil<4; fil++){
        for (int col=0; col<4; col++, dad++){
            //letras[fil][col] = dados[dad][rand()%6];
            *(letras + fil*4 + col) = *(dados + dad + (rand()%6));
        }
    }

    return ;

}

int main(int argc, const char **argv){


    srand (time(NULL));

    const char dados[16][6] = {
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

    char letras[4][4];

    tira_dados(dados, letras);

    for (int f=0; f<4; f++){
        for (int c=0; c<4; c++)
            printf("%c ", letras[f][c]);
        printf("\n");
    }






	return EXIT_SUCCESS;
}
