#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int color,	//declarar variables
        color_1,
        color_2,
        color_3,
        color_4,
        color_5,
        color_6,
        color_7;
    negro = 0,
          azul = 1,
          rojo = 2,
          morado = 3,
          amarillo = 4,
          naranja = 5,
          verde = 6,
          blanco = 7;
    char eleccion_1,
         eleccion_2;

    // Solicitar entrada
    printf ("dime si ves éstos colores(S/N):\n-el ROJO:\n");
    scanf (" %c", &eleccion_1);
    printf ("-y el AZUL:\n");
    scanf (" %c", &eleccion_2);
    printf ("-y el M:\n");i
    scanf (" %c", &eleccion_2);
    printf ("-y el AZUL:\n");
    scanf (" %c", &eleccion_2);




    // Asignar valores en funcion de la elección
    if (eleccion_1 == 's')
        color_1 = rojo;
    else 
        color_1 = negro;


    if (eleccion_2 == 's')
        color_2 = azul;
    else
        color_2 = negro;


    if ((eleccion_1 == 's') && (eleccion_2 == 's'))
        color_3 =  morado;
    else 
        color_3 = negro;


    if (eleccion_4 == 's')
        color_4 = amarillo;
    else
        color_4 = negro;


    if (eleccion_1 == 's') && (eleccion_4 == 's')
        color_5 = naranja;
    else 
        color_5 = negro;


    if (eleccion_4 == 's') == (eleccion_2 == 's')
        color_6 = verde;
    else
        color_6 = negro;


    if (eleccion_7 == 's')
        color_7 = blanco;
    else 
        color_7 = negro;



    return EXIT_SUCCESS;
}
