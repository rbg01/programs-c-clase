#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SEMILLA 12345

void juego(void); /*prototipo de función*/
int tirada(void); /*prototipo de función*/

int main(){

    char respuesta = 'S';

    printf ("Bienvenido al juego CRAPS\n\n");

    srand (SEMILLA); /*generador d numeros aleatorios*/
    /*bucle principal*/
    while (toupper(respuesta) != 'N'){
    	juego();
	printf ("\n¿Quieres jugar otra vez? (S/N)");
	scanf ("  %c", &respuesta);
	printf ("\n");
    }
    printf ("Adiós que te vaya bien");

	return EXIT_SUCCESS;
}

void juego(void){ /*simular jugada completa*/

    int puntos1, puntos2;
    char nada;

    printf ("Por favor lanza los dados...");
    scanf ("%c", &nada);
    printf ("\n");
    puntos1 = tirada();
    printf ("\n%2d", puntos1);

    switch (puntos1){

	case 7: /*ganado en la primera tirada*/
	case 11:
	    printf ("Enhorabuena: ¡has ganado en la primera tirada\n");
	    break;
	    
	case 2: /*se ha perdido a la primera tirada*/
	case 3:
	case 12:
	    printf ("¡Has perdido en la primera tirada\n");
	    break;

	case 4: /*se requieren más tiradas*/
	case 5:
	case 6:
	case 8:
	case 9:
	case 10:
	    do{
	    	printf ("lanza de nuevo...");
		scanf ("%c", &nada);
		puntos2 = tirada();
		printf ("\n%2d", puntos2);
	    }while (puntos2 != puntos1 && puntos2 != 7);

	    if (puntos2 == puntos1)
		printf("¡Ganas! por igualar tu primera puntuación\n");
	    else
		printf ("¡Pierdes! por no igualar tu primera puntuación\n");
	    break;
    }
    return;
}

int tirada(void){    /*simula l lanzamiento de dos dados*/

    float x1, x2;
    int n1, n2;

    x1 = rand() / 32768.0;
    x2 = rand() / 32768.0;

    n1 = 1 + (int) (6 * x1); /*simula el primer dado*/
    n1 = 1 + (int) (6 * x2); /*simula el segundo dado*/

    return (n1 + n2); /*la puntuación es la suma de los dos dados*/
}
