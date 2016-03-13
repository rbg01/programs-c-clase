
  /* gets */

#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[80];

    printf("dime tu nombre: ");
    gets(name);     //-->gets coge cualquier caracter
 //   scanf(" %[^\n]", name); //-->lo mismo que poner ésto

    printf("%s, y te haré un jardin de rosas.\n", name);





    return EXIT_SUCCESS;
}
