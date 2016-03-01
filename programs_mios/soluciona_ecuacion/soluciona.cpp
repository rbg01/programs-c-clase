#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define VERDADERO 1
#define FALSO 0

int main(){

    int indicador = VERDADERO, cont = 0;
    float  raiz, test, error;
    float valor;

    /* Leer parámetros de entrada */

    printf("valor inicial: ");
    scanf(" %f", &valor);
    while (indicador){	//comienso del bucle principal
	++cont;
	if (cont == 50) indicador = FALSO;
	test = 10. - 3. * pow(valor, 2); 
	if (test > 0){	//otra iteración
	    raiz = pow(test, 2);
	    printf("\niteración nº %2d", cont);
	    printf("\tx= %7.5f", raiz);
	    error = fabs(raiz - valor);
	    if (error < 0.00001) valor = raiz; //repetir calculo
	    else{
		indicador = FALSO;
		printf("\n\nRaíz= %7.5f", raiz);
		printf("\tNº de iteraciones = %2d", cont);
		
	    }
	}
	else{	//mensaje de error
	    indicador = FALSO;
	    printf("\nNúmeros fuera de rango ---\n");
	    printf("--Intenta con otro valor inicial--\n");
	}

    }
    if ((cont == 50) && (error > 0.00001))//otro msj de error
	printf("\n\nconvergencia no obtenida tras 50 vueltas macho");
    

	return EXIT_SUCCESS;
}
