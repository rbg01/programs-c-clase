#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int progress ();

int main(){

    char mi_nombre[20];
    char comando[0x100];

//    system("toilet --gay -f pagga 'NOMBRE'");

    /* bloque de entrada de datos */

    printf("Nombre: ");
    scanf("%s", mi_nombre);
    printf(" %s en gay es: \n", mi_nombre);
    progress();
    printf("\n");
    

    sprintf(comando, "toilet --gay -f pagga %s", mi_nombre);
    system(comando);

	return EXIT_SUCCESS;
}

int progress (){

    for (int vez=0; vez<5; vez++){
    printf("\r");
    	for (int i=0; i<vez; i++)
    		printf("=====");
    		printf(">");
    		fflush(stdout);
    		sleep(1);
}
return EXIT_SUCCESS;
}

