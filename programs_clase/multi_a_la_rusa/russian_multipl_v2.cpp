


    /*  Multiplica a la rusa Versión 2  */



#include <stdio.h>
#include <stdlib.h>



int main(int argc, const char **argv){

    int multiplicando, multiplicador, multi_plicando, multi_plicador;
    int total = 0;

    printf("introduce un multiplicando: \n");
    scanf(" %i", &multiplicando);

    printf("introduce un multiplicador: \n");
    scanf(" %i", &multiplicador);

    multi_plicando = multiplicando;
    multi_plicador = multiplicador;

     do{
         

        if(multi_plicador % 2 !=0)
            total += multi_plicando;

        multi_plicando *= 2;
        multi_plicador = multi_plicador / 2;

    }while(multi_plicador >= 1);



     printf("%i X %i =  %i\n", multiplicador,multiplicando, total);



    return EXIT_SUCCESS;
}
