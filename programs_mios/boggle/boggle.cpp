#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>

// Función menea las caras de los dados

int menea_cara(){

    srand(time(NULL));

    int cara_dado = (rand()%6);

    //sleep(1);

    return(cara_dado);
}

// Funciòn menea los dados

int menea_dados(){

    srand(time(NULL));

    int num_dado = (rand()%16);

    return(num_dado);
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
	 letra,
	 tablero[4][4];
    bool usado[16];
    int indice = 0;



    /* con éste bucle meneamos cada dado y rellenamos letras_ordenadas[16] con una letra aleatoria de cada dado */

    for(int l=0,d=0; l<16,d<16; l++,d++){

	letras_ordenadas[l] = DADOS[d][menea_cara()];

	printf ("\tdado[%i], letra[%i] = \"%c\"\n", d,menea_cara(), letras_ordenadas[l]);

	sleep(1);
    }

    printf("\n");

    for ( int fila=0; fila<4; fila++){

	for (int col=0; col<4; col++){

	    tablero[fila][col] = letras_ordenadas[menea_dados()];
	    usado = menea_dados();
	    letras_ordenadas[usado] = false;

	    printf ("\t%i.%c ", usado, tablero[fila][col]);
	    sleep(1);
	}


	printf("\n");



    }






    return EXIT_SUCCESS;
}
