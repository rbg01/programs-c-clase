#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int UNO = 1,
	DOS = 2,
	TRES =3,
	CUATRO = 4,
	CINCO = 5,
	SEIS = 6,
	SIETE = 7,
	OCHO = 8,
	NUEVE = 9,
	A = 10,
	B = 11,
	C = 12,
	D = 13,
	E = 14,
	F = 15;
    char num_hexa[16];
    char basura[16];
   
		// Solicitar entrada
    printf ("Introduce 2 bytes hexadecimales\n");

		// Guardamos en el array la entrada
    scanf (" %[a-fA-F0-9] ", num_hexa);
   

    printf("%s\n", num_hexa);
    printf ("%s\n", basura);
   
    







	return EXIT_SUCCESS;
}
