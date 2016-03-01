#include <stdio.h>
#include <stdlib.h>

int main(){


    int mes, anno;

    const char *MES[12] = {"EN","FEB","MAR","ABR","MAY","JUN","JUL"," AGO","SEP","OCT","NOV","DIC"};

    printf("Fecha de nacimiento (dd/mm/aa): ");
    scanf(" %*i/%i/%i" , &mes , &anno);

    printf("Naciste en %s de %i.\n", MES[mes-1], anno);





    return EXIT_SUCCESS;

}
