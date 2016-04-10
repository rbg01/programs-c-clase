#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){return op1 + op2; }
int resta(int op1, int op2){return op1 - op2;}
int multi(int op1, int op2){return op1 * op2;}
int divi(int op1, int op2){return op1 / op2;}




int main(int argc, const char **argv){

    int (*p)(int, int),
        op1, op2,
        resultado;
    char eleccion;


    while(1){

    printf("Elige una operación:(Suma, Resta, Multiplicación, División)\n");
    scanf(" %c", &eleccion);

    switch(eleccion){

        case 's':
            printf("introduce dos valores:\n");
            scanf(" %i", &op1);
            scanf(" %i", &op2);
            p = suma;
            resultado = p(op1, op2);
            printf ("suma = %i\n", resultado);
            break;

        case 'r':
            printf("introduce dos valores:\n");
            scanf(" %i", &op1);
            scanf(" %i", &op2);
            p = resta;
            resultado = p(op1, op2);
            printf ("resta = %i\n", resultado);
            break;

        case 'm':
            printf("introduce dos valores:\n");
            scanf(" %i", &op1);
            scanf(" %i", &op2);
            p = multi;
            resultado = p(op1, op2);
            printf ("multiplicación = %i\n", resultado);
            break;

        case 'd':
            printf("introduce dos valores:\n");
            scanf(" %i", &op1);
            scanf(" %i", &op2);
            p = divi;
            resultado = p(op1, op2);
            printf ("división = %i\n", resultado);
            break;

        default :
            break;

    }


    }

	return EXIT_SUCCESS;
}


