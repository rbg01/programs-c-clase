#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf ("dime número a: ");
    scanf (" %i", &a);
    printf ("dime número b: ");
    scanf (" %i", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf ("a = %i\nb = %i\n", a, );







	return EXIT_SUCCESS;
}
