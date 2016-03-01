#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int de_hexa_a_dec(char hexa[]);

int main(){

    int decimal, octal, hexadecimal;
    char hexa[8];
   int cont = 0, suma = 0;
    int exp = 7;
    int a = 10,A = 10,
       	b = 11,B = 11,
       	c = 12,C = 12,
       	d = 13,D = 13,
       	e = 14,E = 14,
       	f = 15,F = 15;



    printf("pon un número: ");
    scanf(" %i", &decimal);

        /* base 16 */

    printf("el resto de %i  es: %i\n", decimal, decimal % 16);
    printf("el cociente de %i es: %i\n", decimal, decimal / 16);
    printf("%i en hexadecimal es: %x\n", decimal, decimal);
    printf("%i en octal es: %o\n\n", decimal, decimal);


        /* base 2 */

    printf("el resto de %i  es: %i\n", decimal, decimal % 2);
    printf("el cociente de %i es: %i\n", decimal, decimal / 2);
    printf("%i en hexadecimal es: %x\n", decimal, decimal);
    printf("%i en octal es: %o\n\n", decimal, decimal);

        /* base 8 */

    printf("el resto de %i  es: %i\n", decimal, decimal % 8);
    printf("el cociente de %i es: %i\n", decimal, decimal / 8);
    printf("%i en hexadecimal es: %x\n", decimal, decimal);
    printf("%i en octal es: %o\n\n", decimal, decimal);








    printf("introduce hexadecimales: ");
    scanf(" %[0-9a-fA-F]", hexa);
    printf("%s\n", hexa);
   // de_hexa_a_dec(hexa);

//	return EXIT_SUCCESS;
//}

//int de_hexa_a_dec(char hexa[]){

   // char hexa[80];
        for (cont; cont <= 7; cont++)
	for (exp; exp = 0; cont--){
	hexa[cont] = hexa[cont] * pow (16, exp);
	suma = suma + hexa[cont];
	printf("el número %s en hexa es: %i", hexa, suma);


	}

return EXIT_SUCCESS;




}




