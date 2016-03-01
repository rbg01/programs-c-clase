#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define EOL '\n'
//#define TAMANO 80

int main(){
   
    char caracteres[80];
    int cont;

    /*leer los caracteres*/

    printf("escribe unos caracteres: ");
<<<<<<< HEAD
     //   scanf(" %[^\n]", caracteres);
=======

>>>>>>> e7a0ab6ef321f397e952ecb9ac8dac58ddd0cc6e
   // for(cont = 0; (caracteres[cont] != EOL); ++cont)
	scanf(" %[^\n]", caracteres);
	//caracteres[cont] = getchar();




/* bucle para escribir la salida traducida */

    for(cont = 0; (caracteres[cont] != EOL); ++cont)

	printf("carácter %c entero= %i octal = %o hexadecimal = %x\n", caracteres[cont], caracteres[cont], caracteres[cont], caracteres[cont]);



	return EXIT_SUCCESS;
}
