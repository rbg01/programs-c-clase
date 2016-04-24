

  /*  Fibonacci recursivo */

#include <stdio.h>
#include <stdlib.h>

void calcula_fibo(int limite, int *fibo){

    static int i = 2;

    if (i < limite){
        *(fibo + i) = *(fibo+(i-1)) + *(fibo+(i-2));
        i++;
        calcula_fibo(limite, fibo);
    }
    else
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
