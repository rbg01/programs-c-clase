#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define EOL '\n'

int main(){
   
    char caracteres[80];
    int aux, cont;

    /*leer los caracteres*/

    printf("escribe unos caracteres: ");

    for(cont = 0; (caracteres[cont] = getchar()) != EOL; ++cont);

    aux = cont;

    /* escribir salida traducida*/

    for(cont =0; cont < aux; ++cont)

    	printf("carácter %c entero= %i octal = %o hexadecimal = %x\n", caracteres[cont], caracteres[cont], caracteres[cont], caracteres[cont]);



	return EXIT_SUCCESS;
}
