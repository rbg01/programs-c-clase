#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int progress();  //definir función progress

int main(){

    FILE *pf;
    char letras[150];
    int cont = 0,
	vez;
		//abrir archivo en modo "w"
    pf = fopen("texto.txt", "w");
		//solicitar entrada
    printf("Escribe unas líneas debajo\n");
		//guardar en letras
    scanf(" %[^\n]", letras);
    		//escribimos en .txt el valor de letras
    fprintf(pf, "%s", letras);
		//cerrar .txt
    fclose(pf);
		//solicitar nº de repeticiones y guardar en vez
    printf("¿cuántas veces?\n");
    scanf(" %i", &vez);
		//llamar y ejecutar progress
    progress();
		//escribir salida
    for (cont; cont <= vez; cont++)
    system("cat ~/work/programs-de-c/programs_de_clase/clase/repitelo/texto.txt | toilet -F border --gay -f pagga");


	return EXIT_SUCCESS;
}

int progress(){

    

    for (int vez=0; vez<5; vez++){
    printf("\r");
    for (int i=0; i<vez; i++)
	printf("====");
    printf(">");
    fflush(stdout);
    sleep(1);
    }
    printf("RRREPITELO PAUL!!!\n");
    sleep(1);

return EXIT_SUCCESS;


}
