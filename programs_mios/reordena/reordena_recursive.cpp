



/*  Reordena números Recursive  */

#include <stdio.h>
#include <stdlib.h>



void reordenar (int n, int x[]){

    static int i = 0;
    static int elem = 1;
    int temp;


    while (i < n || elem < n - 1){

        if (x[i] < x[elem]){
            temp = x[elem];
            x[elem] = x[i];
            x[i] = temp;
            i += 1;
            elem += 1;
        }
        reordenar(n, x);
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
