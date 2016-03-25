#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 0x100

int main(int argc, const char **argv){

    int numero=0;
    char num_hexa[MAX];
    char *movil = num_hexa;
    char *base = num_hexa;


    printf ("Introduce los dígitos hexadecimales:\n");
    /*Guardamos en el array la entrada*/
    fgets(num_hexa, MAX, stdin);
    movil += strlen(num_hexa);


    /* recorrer el array para ver los q son hex y no lo son*/

    for (; base <= movil ; base++){

 
        printf("%c", *base);
    printf ("\n");
    numero+=1;
  
    }

  printf ("%i\n", numero-2);








    return EXIT_SUCCESS;
}
