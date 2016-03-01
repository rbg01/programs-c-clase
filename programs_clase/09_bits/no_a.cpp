#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned int a = 12;

   // printf("Dame un número: ");
   // scanf(" %[0-1a-fA-F]", &a);

    printf("%X - %i - %u - %x - %i\n", a, a, ~a, ~a, ~a);





	return EXIT_SUCCESS;
}
