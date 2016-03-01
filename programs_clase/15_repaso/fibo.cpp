#include <stdio.h>
#include <stdlib.h>

#define n 50

int main(int argc, const char **argv){

    int fibo[n] = {1,1};

    
    
    for (int cont = 2; cont < n; cont++)
        fibo[cont] = fibo[cont-1] + fibo[cont-2];


    for (int cont = 0; cont < n; cont++)
        printf ("fibonacci %i = %i\n", cont, fibo[cont]);





    return EXIT_SUCCESS;
}
