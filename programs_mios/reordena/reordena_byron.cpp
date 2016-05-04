


    /*  Reordena lista de números versión Byron */

#include <stdio.h>
#include <stdlib.h>



void reordenar (int n, int x[]){

    int i, elem, temp;

    for (elem = 0; elem < n -1; ++elem)

        for (i = elem + 1; i < n; i++)

            if (x[i] < x[elem]){
                temp = x[elem];
                x[elem] = x[i];
                x[i] = temp;
            }

    return;
}

int main (int argc, const char **argv){

    int i, n, x[] = {3, 7, 1, 9, 2, 1, 4, 2, 5};

    n = 9;

    reordenar(n, x);

    for (i = 0; i < n; i++)
        printf("%i", x[i]);

    printf ("\n");

    return EXIT_SUCCESS;
}
