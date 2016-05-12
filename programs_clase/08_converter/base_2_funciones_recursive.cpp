


/*  Conversor decimal a binario   */

#include <stdio.h>
#include <stdlib.h>

#define BASE 2

void opera(int *datos, int numero, int cont){


    for (int i=0; numero != 0; i++, cont++){

        datos  = (int *) realloc(datos, i * sizeof(int));

        //vamos guardando an resto el resultado
        datos[i] = numero % BASE;
        numero /= BASE;
    }

    printf("%i", *(cont));
    return;

}

void imprime(int datos[], int cont){

 printf("%i\n", *(cont));

    for ( int j = *(cont)-1; j >= 0; j--){
        printf("%i", datos[j]);
    }

    printf("\n");
    free (datos);

//    printf("%i\n", *(cont));
    return;

}

int main(int argc, const char **argv){

    int origen;
    int *cont = 0;
    int *resto = NULL;

    system("clear");


    printf("Dame un número: \n");
    scanf(" %i", &origen);

    opera(resto, origen, &cont);
    imprime(resto, &cont);

    
    return EXIT_SUCCESS;

}
