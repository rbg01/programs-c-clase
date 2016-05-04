

  /*  Calcular mediana de una lista de números */


#include <stdio.h>
#include <stdlib.h>


  //reordena el array
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

    int i, n, x[] = {3, 7, 1, 9, 2, 1, 8, 2, 5};
    int mediana;
    float medianafl;


    n = 9;

    reordenar(n, x);

    for (i = 0; i < n; i++)
        printf("%i", x[i]);

    printf("\n");

    if (n % 2 == 0){
      medianafl = (x[ n / 2] + x[(n / 2) + 1]) / 2;
      printf("%.2f", medianafl);

    }else if (n % 2 != 0){
        mediana = x[(n / 2) + 1];
        printf("%i", mediana);
    }


    printf("%i\n", x[mediana]);





    printf ("\n");

    return EXIT_SUCCESS;
}
