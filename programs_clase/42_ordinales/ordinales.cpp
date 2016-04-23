#include <stdio.h>
#include <stdlib.h>

#define FIN 10

   const char *UDS[FIN] = {
        " ",
        "primero",
        "segundo",
        "tercero",
        "cuarto",
        "quinto",
        "sexto",
        "septimo",
        "octavo",
        "noveno"
    };

    const char *DEC[FIN] = {
        " ",
        "decimo",
        "vigesimo",
        "trigesimo",
        "cuadragesimo",
        "quincuagesimo",
        "sexagesimo",
        "septuagesimo",
        "octogesimo",
        "nonagesimo"
    };

    const char *CEN[FIN] = {
        " ",
        "centesimo",
        "ducentesimo",
        "tricentesimo",
        "cuadringentesimo",
        "quingentesimo",
        "sexcentesimo",
        "septingentesimo",
        "octingentesimo",
        "noningentesimo"
    };


int main(int argc, char **argv){

     char numero[3];
    int uds, dec, cen, pos_libre = 0;


//    while(1){

        system("clear");

    if(argc < 2){
        fprintf(stderr, "Usage: %s <number>", argv[0]);
        return EXIT_FAILURE;
    }

    for(int i=0; argv[1][i]!='\0'; i++)
        pos_libre += 1;

    //a partir de aqui pos_libre tiene el valor que tenga argv[1][i]
    switch(pos_libre){

        case 1 :
             uds = (argv[1][0] - '0');
             break;

        case 2 :
            uds = (argv[1][1] - '0');
            dec = (argv[1][0] - '0');
            break;

        case 3 :
            uds = (argv[1][2] - '0');
            dec = (argv[1][1] - '0');
            cen = (argv[1][0] - '0');
            break;

    }
    

    printf("%s %s %s\n", CEN[cen], DEC[dec], UDS[uds]);

//    }




	return EXIT_SUCCESS;
}
