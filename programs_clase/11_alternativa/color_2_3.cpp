#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NEGRO 0
#define ROJO 1
#define AZUL 2
#define MORADO 3
#define AMARILLO 4
#define NARANJA 5
#define VERDE 6
#define BLANCO 7

const char *nombre[] = {
    "Negro",
    "Rojo",
    "Azul",
    "Morado",
    "Amarillo",
    "Naranja",
    "Verde",
    "Blanco"
};


int main(int argc, const char **argv){
    char respuesta;
    int color = 0;

    printf ("Ves rojo (s/N): \n");
    scanf (" %c", &respuesta);

    if (tolower(respuesta) == 's');
    color += ROJO;

    printf ("Ves azul (s/N): \n");
    scanf ("%c", &respuesta);

    if (tolower(respuesta) == 's');
    color += AZUL;

    printf ("Ves morado (s/N): \n");
    scanf ("%c", &respuesta);

    if (tolower(respuesta) == 's');
    color += MORADO;


    printf ("Ves amarillo (s/N): \n");
    scanf ("%c", &respuesta);

    if (tolower(respuesta) == 's');
    color += AMARILLO;

    printf ("Ves naranja (s/N): \n");
    scanf ("%c", &respuesta);

    if (tolower(respuesta) == 's');
    color += NARANJA;

    printf ("Ves verde (s/N): \n");
    scanf ("%c", &respuesta);

    if (tolower(respuesta) == 's');
    color += VERDE;

    printf ("Ves blanco (s/N): \n");
    scanf ("%c", &respuesta);

    if (tolower(respuesta) == 's');
    color += BLANCO;


    printf ("%s.\n", nombre[color]);
    printf("\n");




    return EXIT_SUCCESS;
}
