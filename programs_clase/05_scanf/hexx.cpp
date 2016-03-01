#include <stdio.h>
#include <stdlib.h>

int main(){

    char number[20];
    char rubbish[0x100];

    printf("hehadecimal: ");
    scanf(" %[0-9a-fA-F]", number);
    scanf(" %[^\n]", rubbish);

    /*mostramos por un lado los caracteres hexa dl string y por otro los que no lo son*/
    printf("%s\n", number);
    printf("%s\n", rubbish);
    

	return EXIT_SUCCESS;
}
