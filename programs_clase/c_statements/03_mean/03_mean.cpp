

#include <stdio.h>
#include <stdlib.h>

#define ESC 990099
int main(int argc, const char **argv){

    int cont = 1;
    float suma = 0.0,
          numeros,
          media = 0.0;


    printf ("Dime los números que quieras:\n");
    printf ("(pulsa 'f' para finalizar)\n");

    for(; numeros != ESC ; cont++){
        scanf (" %f", & numeros);

           suma += numeros;

    }



    media = suma / cont;

    printf ("La media de los números es: %f\n", media);











    return EXIT_SUCCESS;
}
