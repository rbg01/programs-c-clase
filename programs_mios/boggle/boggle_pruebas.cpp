#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

// Función menea las caras de los dados
char menea_cara(char *array[]){

    char caracter;

    srand(time(NULL));

    int cara_dado = (rand()%6);

    caracter = *array[cara_dado]; 

    return(caracter);

}
// función menea los dados

int menea_dados(){

    srand(time(NULL));

    int num_dado = (rand()%16);

    return(num_dado);
}



int main(int argc, const char **argv){

    char dado_select,
	 *cara_dado,
	 array_dado[6];

    const char *DADOS[] = {
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



    printf ("\tdado %i = \"%s\"\n", menea_dados(), DADOS[menea_dados()]);

    printf ("\n");

    *cara_dado = menea_cara(DADOS[3]);

    printf ("\t%c", *cara_dado);

   printf ("\n"); 


    for(int i=0; i<16; i++)
	printf ("\tdado %i = \"%s\"\n", i, DADOS[i]);





    return EXIT_SUCCESS;
}
