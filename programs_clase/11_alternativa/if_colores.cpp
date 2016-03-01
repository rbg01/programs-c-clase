#include <stdio.h>
#include <stdlib.h>

int main(){

    int color,	//declarar variables
        color_1,
        color_2,
        negro = 0,
        azul = 1,
        rojo = 2,
        morado = 3;
    char eleccion_1,
         eleccion_2;
    // Solicitar entrada
    printf ("dime si ves éstos colores(S/N):\n-el ROJO:\n");
    scanf (" %c", &eleccion_1);
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

    // Hacer la operación para ver el color

    color = color_1 + color_2;

    // Mostrar la salida según el color

    if (color == negro)
        printf("Tu vés el color NEGRO");
    if (color == azul)
        printf("Tu vés el color AZUL");
    if (color == rojo)
        printf("Tu vés el color ROJO");
    if (color == morado)
        printf("Tu vés el color MORADO");

    printf("\n");












    return EXIT_SUCCESS;
}
