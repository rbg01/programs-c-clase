#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>
#include <string.h>


// Función menea las caras de los dados

int menea_cara(){

    srand(time(NULL));

    int cara_dado = (rand()%6);



    return(cara_dado);
}

// Funciòn menea los dados

int menea_dados(){

    srand(time(NULL));

    int num_dado = (rand()%16);

    return(num_dado);
}

// Función comparar necesaria para qsort

int cmpfunc(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

// Función progress

int progress(){

    
    for (int vez=0; vez<6; vez++){
	printf("\r");
	printf("\t");
	for (int i=0; i<vez; i++)
	    printf("====");
	printf(">");
	fflush(stdout);
	sleep(1);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

int main(int argc, const char **argv){

    const char *DADOS[16] = {
	"HFSIEE",
	"RFXIOA",
	"NSRHIE",
	"ZNDVAE",
	"PLSTUE",
	"TAAEIO",
	"LWRUIE",
	"CRALES",
	"SIRMOA",
	"KEUNOT",
	"QMBJAO",
	"BTLRAI",
	"DMCPAE",
	"GNLYUE",
	"SNDTOE",
	"VTNGEI"
    };

    char letras_ordenadas[16],
	 letras_desordenadas[16],
	 tablero[4][5],
	 respuesta;
    int a = 0,
	b = 0;

    system ("clear");


    printf("\t\t*** BOGGLE***\n"
	    "\tConsiste en formar palabras, las\n"
	    "\tpalabras pueden ser como quieras de largas\n"
	    "\tpuedes ir en cualquier dirección, pero NO\n"
	    "\tpuedes repetir casilla......\n");

    printf("\n");
    printf("\tPara jugar pulsa s/n\n\t");
    scanf("\t %c", &respuesta);

    if (respuesta == 's'){

	printf("\tgenerando tablero....\n");
	progress();

	/* con éste bucle meneamos cada dado y rellenamos letras_ordenadas[16] con una letra aleatoria de cada dado */

	for(int l=0,d=0; l<16,d<16; l++,d++){

	    letras_ordenadas[l] = DADOS[d][menea_cara()];

	    printf ("\tdado[%i], letra[%i] = \"%c\"\n", d,menea_cara(), letras_ordenadas[l]);

	    sleep(1);
	}
	/* al finalizar este for tengo letras_oredenandas[16], con un orden inicial, tengo que desordenarlos...*/

	printf("\n");


	// copiar ordenado a desordenado

	strcpy(letras_desordenadas, letras_ordenadas);

	//desordenar desordenado

	qsort(letras_desordenadas, 15, sizeof(char), cmpfunc);

	//imprimir desordenado

	for (int i=0; i<16; i++)
	    printf ("\tordenadas:\"%c\" desordenadas:\"%c\"\n", letras_ordenadas[i], letras_desordenadas[i]);

	printf ("\n");


	//Imprimir tablero


	for (int fila=0; fila<4; fila++){
	    printf("\t");

	  b+=4;  

	    for (int col=0, i=a; col<5, i<b; col++, i++){
		tablero[fila][col] = letras_desordenadas[i];
		printf ("%c ", tablero[fila][col]);
		printf("\t");

	    }

	    
	    a+=4;
	   
	    
	    	
	    printf("\n\n");

	}
	


	printf("a=%i b=%i\n", a, b);





	return EXIT_SUCCESS;
    }
    else (respuesta == 'n');
    printf("\t.....gracias por jugar.....\n");
    return EXIT_SUCCESS;

}
