#include <stdio.h>
#include <stdlib.h>

  //función reordenar
void reordenar(int n, int *x){

    int i, elem, temp;

    for (elem=0; elem < n-1; ++elem)
        //encontrar el menor del resto de los elementos
        for (i=elem+1; i<n ; ++i)
            if (*(x+i) < *(x+elem)){
                //intercambiar los dos elementos
                 temp = *(x+elem);
                 *(x+elem) = *(x+i);
                 *(x+i) = temp;
            }
    return;
}

int main(int argc, const char **argv){

    int i, n, *x;

    // Leer el valor de n
    printf ("Cuántos números vas a introducir:..\n");
    scanf (" %d", &n );
    printf ("\n");

    // Reserva de memoria
    x = (int *) malloc(n * sizeof(int));

    // Leer la lista de números
    for (i=0; i<n; ++i){
        printf ("i= %d  x= ", i+1);
        scanf (" %d", x+i);
    }

    // Reordenar todos los elementos del array
    reordenar(n, x);

    // Escribir la lista reordenada de números
    printf ("Lista ordenada:\n\n");

    for (i=0; i<n; ++i)
        printf ("i= %d   x=%d\n", i+1, *(x+i));



	return EXIT_SUCCESS;
}
