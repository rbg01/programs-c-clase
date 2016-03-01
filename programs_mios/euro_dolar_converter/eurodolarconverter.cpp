#include <stdio.h>
#include <stdlib.h>

int main(){

	double euros, dolares;
	char metodo,
	     respuesta = 'S';

	/*elegir método*/

	printf("Pulsa \"E\" para euro-dolar\n o pulsa \"D\"para dolar-euro: ");
	
	scanf(" %c", &metodo);
	

	switch(metodo){

	case 'D':      /*metodo dolae-euro*/
	    
	    printf("introduce una cantidad en dolares: ");
	    scanf("%lf", &dolares);
	    euros = dolares * 0.90780;
	    printf("%.3lf dolares son %.3lf euros.\n", dolares, euros);
	break;

	case 'E':       /*metodo euro-dolar*/

	    printf("introduce una cantidad en euros: ");
	    scanf("%lf", &euros);
	    dolares = euros / 0.90780;
	    printf("%.3lf euros son %.3lf dolares.\n", euros, dolares);
	break;

	default:

	}

	printf("¿quieres calcular otra vez?\n\"S\", \"N\"");
	scanf(" %c", &respuesta);

	if(respuesta = 'S')
	    switch(metodo);
	else if(respuesta = 'N')
	

	return EXIT_SUCCESS;

}
