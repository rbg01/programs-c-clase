
  /*  Fibonacci con función y punteros  */

#include <stdio.h>
#include <stdlib.h>


void calcula_fibo(int limite, int *fibo){

    for (int i=2; i<limite; i++)
        *(fibo + i) = *(fibo+(i-1)) + *(fibo+(i-2));

    return;
}


int main(int argc, const char **argv){

    int array[] = {1,1};
    int limite = 25;

    calcula_fibo(limite, array);

    for(int i=0; i<limite; i++)
        printf("fibo %i = %i\n", i+1, array[i]);


	return EXIT_SUCCESS;
}
