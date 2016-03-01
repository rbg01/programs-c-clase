#include <stdio.h>
#include <stdlib.h>
#include  <time.h>


int menea_cara(char dados[]){ // Función menea las caras

    srand(time(NULL));

    int cara_dado = (rand()%6);

    return(cara_dado);

    }
	// función menea los dados
int menea_dados(){

    srand(time(NULL));

    int num_dado = (rand()%16);

    return(num_dado);
}



int main(int argc, const char **argv){

    const char *dados[16] = {
	"SFHIEE",
	"RFXIOA",
	"NSRHIE",
	"ZNDVAE",
	"PLSTUE",
	"TAAEIO",
	"LWRUIE",
	"SRALEC",
	"SIRMOA",
	"NEUKOT",
	"BMQJAO",
	"RTLBAI",
	"DMCPAE",
	"NGLYUE",
	"SNDTOE",
	"VTNGEI"
    };

    


//    printf ("%c\n", dado[menea_cara()]);
    printf ("%c\n", *dados[menea_dados()]);

    printf ("\n");

    //printf ("%c", menea_cara(*dados[menea_dados()]));



    for(int i=0; i<16; i++)
	printf ("%c\n", *dados[i]);





	return EXIT_SUCCESS;
}
