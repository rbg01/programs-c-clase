

/*sucesión de Fibonacci
 * a0=1,a1=1,a2=2,a3=3,a4=5,a5=8.....an=(an-1)+(an-2)*/

#include <stdio.h>
#include <stdlib.h>

#define TOPE 50
#define ANTERIOR 1
#define DOSANTES 2

  /* Función calcular numero*/
void calcular(int *datos){


}
int main(int argc, const char **argv){


    int fibo_data[TOPE];
    

    //fibo_data=NULL;

    for (int cont = 0,int aux=0; cont < TOPE, aux < 2; cont++, aux++){


  
        //reserva dinamica de memoria
      //  fibo_data = (int *) realloc((fibo_data),(cont + 1) * sizeof(int));

        if(cont < DOSANTES){
            *(fibo_data+aux) = 1;
            
        
        }break;
        *(fibo_data+cont) = *(fibo_data+cont)-ANTERIOR + *(fibo_data+cont)-DOSANTES;
  
    }


    for (int cont = 0; cont < TOPE; cont++)
        printf ("fibonacci %i = %i\n", cont, fibo_data[cont]);






    return EXIT_SUCCESS;
}
