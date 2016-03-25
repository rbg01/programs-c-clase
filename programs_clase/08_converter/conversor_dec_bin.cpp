#include <stdio.h>
#include <stdlib.h>

#define BASE 2 

int main(){

    //Solicitar entrada y guardar en origen
    system("clear");
    while(1){

        int origen = 0,
            cont = 0;
        int *resto=NULL;


        printf("Dame un número: \n");
        scanf(" %i", &origen);

        // Bucle principal   

        for (int i=0; origen != 0; i++, cont++){

            resto = (int *) realloc(resto, i * sizeof(int));

            //vamos guardando an resto el resultado
            resto[i] = origen % BASE;
            origen /= BASE;
        } 

        for ( int j = cont-1; j >= 0; j--){
            printf("%i", resto[j]);
        }

        printf ("\n");
        free (resto);

    }






    return EXIT_SUCCESS;
}
