

/*sucesión de Fibonacci con funcion calcular
 * a0=1,a1=1,a2=2,a3=3,a4=5,a5=8.....an=(an-1)+(an-2)*/

#include <stdio.h>
#include <stdlib.h>

#define TOPE 50
#define ANTERIOR 1
#define DOSANTES 2

  /* Función calcular numero, le mando el puntero, y hago los cálculos*/
void calcular(int *datos){

    for (int i=0; i<TOPE; i++){

        if(i==0 || i==1)
            datos[i]=1;
        else
            datos[i] = datos[i-ANTERIOR] + datos[i-DOSANTES];
    }




}
int main(int argc, const char **argv){


    int fibo_data[TOPE];


    calcular(fibo_data);




    for (int cont = 0; cont < TOPE; cont++)
        printf ("fibonacci %i = %i\n", cont, fibo_data[cont]);






    return EXIT_SUCCESS;
}
