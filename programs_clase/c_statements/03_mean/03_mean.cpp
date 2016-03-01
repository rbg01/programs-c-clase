#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int cont = 1;
    float suma,
          numeros,
          media;


    printf ("Dime los números que quieras:\n");
    printf ("(pulsa 'f' para finalizar)\n");

    for (cont; numeros <0 ; cont++){
        scanf (" %f", & numeros);

        if ((numeros >= 0) || (numeros != 'f')){
            suma += numeros;
            
        }
    }



    media = suma / cont;

    printf ("La media de los números es: %f\n", media);











    return EXIT_SUCCESS;
}
