#include <stdio.h>
#include <stdlib.h>

double add(double op1, double op2){

    double suma = 0;

    suma = op1 + op2;
    return suma;

}

int main(int argc, const char **argv){

    double num1,
	   num2,
	   resultado;

    printf ("dame un número:\n");
    scanf (" %f", &num1);
    printf ("dame otro número:\n");
    scanf (" %f", &num2);

    resultado = add(num1, num2);

    printf("....la suma es....:%f", resultado);





    
	  





	return EXIT_SUCCESS;
}
