#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


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


void busca_palabra(char *tabl, bool *prueba, char *palabra){

    int fin = strlen(palabra)-1;
    int match = 0;

    printf("%i\n", fin);


    for( int i=0; i<fin; i++){
        char letra = *(palabra+i);
        printf("%c ", letra); 
        for (int f=0; f<4; f++){
            for(int c=0; c<4; c++){
                if (*(tabl+f*4+c)==letra && *(prueba+f*4+c)== false){
                    *(prueba +f*4 +c) = true;
                    match += 1;
                    //break;
                }else if (*(tabl+f*4+c)==letra && *(prueba+f*4+c)== true)

                        match -= 1;

            }
        }
    }

        printf("\n");
        if (match==fin)
            printf("palabra encontrada\n");
        else printf("Palabra NO encontrada\n");
        return;
    }

    void tira_dados(const char *dados,char *letras){


        int dad=0;

        for (int fil=0; fil<4; fil++){
            for (int col=0; col<4; col++, dad++){
                *(letras + fil*4 + col) = *(dados + dad + (rand()%6));
            }
        }
        return ;

    }

    void ponga_false(bool *tablero){

        for(int f=0; f<4; f++){
            for(int c=0; c<4; c++)
                *(tablero+f*4+c)= false;
        }
        return ;

    }

    int main(int argc, const char **argv){


        srand (time(NULL));

        char letras[4][4],
             tablero[4] [4],
             palabra[25];
        bool busqueda[4][4];


        ponga_false(*busqueda);


        tira_dados(*dados, *tablero);

        for (int f=0; f<4; f++){
            for (int c=0; c<4; c++)
                printf("%c ", tablero[f][c]);
            printf("\n");
        }

        printf("\n");

        for (int f=0; f<4; f++){
            for (int c=0; c<4; c++)
                printf("%i ", busqueda[f][c]);
            printf("\n");
        }

        printf("\n");

        printf("introduce palabra: \n");
        fgets(palabra,25,stdin);

        //Pongo palabra en MAYS.
        for(int i=0; palabra[i]!='\0'; i++){
            printf("%c ", palabra[i]);
            palabra[i]=toupper(palabra[i]);
        }

        for(int i=0; palabra[i]!='\0'; i++){
            printf("%c ", palabra[i]);
        }

        busca_palabra(*tablero, *busqueda, palabra);


        for (int f=0; f<4; f++){
            for (int c=0; c<4; c++)
                printf("%i ", busqueda[f][c]);
            printf("\n");
        }








        return EXIT_SUCCESS;
    }
