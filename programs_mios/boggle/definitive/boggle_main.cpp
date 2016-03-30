#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"
/*
#define MAXTABL 8
#define MAXDAD 64
#define DADOCARAS 6
*/
#define ESC 27



const char DADOS[MAXDAD][DADOCARAS] = {

    {'K','E','U','N','O','T'},{'K','E','U','N','O','T'},
    {'H','F','S','I','E','E'},{'H','F','S','I','E','E'},
    {'S','I','R','M','O','A'},{'S','I','R','M','O','A'},
    {'R','F','X','I','O','A'},{'R','F','X','I','O','A'},
    {'N','S','R','H','I','E'},{'N','S','R','H','I','E'},
    {'Z','N','D','V','A','E'},{'Z','N','D','V','A','E'},
    {'P','L','S','T','U','E'},{'P','L','S','T','U','E'},
    {'T','A','A','E','I','O'},{'T','A','A','E','I','O'},
    {'L','W','R','U','I','E'},{'L','W','R','U','I','E'},
    {'C','R','A','L','E','S'},{'C','R','A','L','E','S'},
    {'Q','M','B','J','A','O'},{'Q','M','B','J','A','O'},
    {'B','T','L','R','A','I'},{'B','T','L','R','A','I'},
    {'D','M','C','P','A','E'},{'D','M','C','P','A','E'},
    {'G','N','L','Y','U','E'},{'G','N','L','Y','U','E'},
    {'S','N','D','T','O','E'},{'S','N','D','T','O','E'},
    {'V','T','N','G','E','I'},{'V','T','N','G','E','I'},
    {'H','F','S','I','E','E'},{'H','F','S','I','E','E'},
    {'R','F','X','I','O','A'},{'R','F','X','I','O','A'},
    {'N','S','R','H','I','E'},{'N','S','R','H','I','E'},
    {'Z','N','D','V','A','E'},{'Z','N','D','V','A','E'},
    {'P','L','S','T','U','E'},{'P','L','S','T','U','E'},
    {'T','A','A','E','I','O'},{'T','A','A','E','I','O'},
    {'L','W','R','U','I','E'},{'L','W','R','U','I','E'},
    {'C','R','A','L','E','S'},{'C','R','A','L','E','S'},
    {'S','I','R','M','O','A'},{'S','I','R','M','O','A'},
    {'K','E','U','N','O','T'},{'K','E','U','N','O','T'},
    {'Q','M','B','J','A','O'},{'Q','M','B','J','A','O'},
    {'B','T','L','R','A','I'},{'B','T','L','R','A','I'},
    {'D','M','C','P','A','E'},{'D','M','C','P','A','E'},
    {'G','N','L','Y','U','E'},{'G','N','L','Y','U','E'},
    {'S','N','D','T','O','E'},{'S','N','D','T','O','E'},
    {'V','T','N','G','E','I'},{'V','T','N','G','E','I'}

};




int main(int argc, const char **argv){

    srand(time(NULL));


    char letras[MAXTABL][MAXTABL],
         tablero[MAXTABL][MAXTABL];
    char respuesta,
         palabra[25];
    bool busqueda[MAXTABL][MAXTABL];
    //int puntos = 0;
    //int longit = 0;

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
        //        progress();
        printf("\n");
        tira_dados(*DADOS, *letras);

        //desordenar letras
        qsort(letras, 64, sizeof(char), cmpfunc);
        int puntos = 0;

        //bzero(busqueda, sizeof(bool));
        for(int f=0; f<MAXTABL; f++){
            for(int c=0; c<MAXTABL; c++)
                busqueda[f][c]= false;
        }

        while(1){
            system ("clear");
            printf ("\n");
            pintar_tablero(*letras);
            printf("\n");
            printf("\tPuntos: %i", puntos);
            // Introducir palabra a buscar
            printf("\tIntroduce palabra: ");
            fgets(palabra,25,stdin);

            // int longit=0;

            //longit += strlen(palabra)-1;
            //longit = strlen(palabra)-1;
            int tam;
            for (int i=0; palabra[i]!= '\0'; i++){
                tam=i;
                 printf("%c, %i %i", palabra[i], i, tam);


            }

            if (buscala(*letras, *busqueda, palabra,tam)){
                printf("\tPalabra encontrada!!\n");
                puntos += strlen(palabra)-1;
                for(int f=0; f<MAXTABL; f++){
                    for(int c=0; c<MAXTABL; c++)
                        printf("%i", busqueda[f][c]);
                    printf("\n");
                    sleep(1);
                }
            }
            else 
                printf("\tPalabra NO encontrada\n");
            continue;
        }
    }






    printf("\t.....gracias por jugar.....\n");
    return EXIT_SUCCESS;

}
