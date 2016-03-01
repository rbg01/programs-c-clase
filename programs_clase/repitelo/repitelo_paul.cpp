#include <stdio.h>
#include <stdlib.h>

int main(){

    //FILE *pf;
    char texto[100];
    int rep,
	cont = 0;


   // pf = fopen("texto.txt", "w");

	//Solicitar entrada de texto y asignarlas a texto

    printf("Pon unas líneas de texto debajo\n");
    scanf("%[^\n]", texto);

   	//Solicitar numero de repeticiones y asign a rep

    printf("¿Cuántas veces?\n");
    scanf(" %i", &rep);

	//Bucle principal

	for (cont; cont <= rep; ++cont)
	    printf("%s\n", texto);




	return EXIT_SUCCESS;
}
