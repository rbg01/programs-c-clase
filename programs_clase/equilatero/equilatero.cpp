#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char **argv){


    float lado,
	  area,
	  perimetro,
	  altura;
    int eleccion;
    char a;
		//pedir entrada

    a = printf ("Vamos a calcular...\n"
	    "..dime un lado de un triángulo equilátero..\n");
		//guardar entrada
    scanf (" %f", &lado);
		//comprobar laddo
    if (lado <= 0)
	return(a);
		//hacer los cálculos

    perimetro = lado * 3;
    altura = sqrt((pow(lado,2)) - (pow((lado/2),2)));
    area = (lado * altura)/2;

		//elegir método
    printf ("Elige que quieres calcular...\n"
	    " 1-perímetro, 2-altura, 3-área.\n");
    scanf (" %i", &eleccion);

    switch (eleccion){

	case 1:
	    printf ("%f\n", perimetro);
	    break;

	case 2:
	    printf ("%f\n", altura);
	    break;

	case 3:
	    printf ("%f\n", area);
	    break;
    }





    return EXIT_SUCCESS;
}
