/*calculo de factoriales de forma recirsiva*/

#include <stdio.h>
#include <stdlib.h>

long int factorial(int n); /*prototipo de función*/

int main(){

    int n;
    /*leer cantidas entera*/
    printf("n = ");
    scanf ("%d", &n);
    /*calcualar y visualizar el factorial*/
    printf("n! = %ld\n", factorial(n));

	return EXIT_SUCCESS;
}

long int fanctorial(int n){

    if (n <= 1)
	return (1);
    else
	return (n * factorial(n -1));

}
