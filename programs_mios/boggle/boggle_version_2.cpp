#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

// Función menea las caras de los dados

int menea_cara(){

    srand(time(NULL));
    int cara_dado = (rand()%6);

    return(cara_dado);
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

// Función buscar palabra

bool buscar_palabra( char palabra_intro[], char array[]){

    int fin=0,
        match=0;
    char letra;
    bool resultado,
         temporal[16];

    for (int i=0; i<16; i++)
        temporal[i] = false;

    fin = (strlen(palabra_intro))-1;

    for (int j=0; j<fin ; j++){

        letra = palabra_intro[j];

        for (int k=0,l=0; k<16,l<16; k++,l++){

            if((array[k] == letra)&&(temporal[l] != true)){

                match+=1;
                temporal[l] = true;
                break;
            }

        }
    }

    (match == fin)? resultado=true : resultado=false;


    return(resultado);

}

void rellena_tablero(char array[]){

    int a = 0,
        b = 0;
    char tablero[4][4];

    for (int fila=0; fila<4; fila++){
        printf("\t");

        b+=4;  

        for (int col=0, i=a; col<4, i<b; col++, i++){
            tablero[fila][col] = array[i];
            printf ("%c ", tablero[fila][col]);
            printf("\t");

        }

        a+=4;

        printf("\n\n");

    }

    return;
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
         tablero[4][4],
         palabra_intro[25],
         palabra_intro_mays[25],
         respuesta;

    int a = 0,
        b = 0;

    bool coincidencia;


    system ("clear");


    printf("\t\t*** BOGGLE***\n"
            "\tConsiste en formar palabras, las\n"
            "\tpalabras pueden ser como quieras de largas\n"
            "\tpuedes ir en cualquier dirección, pero NO\n"
            "\tpuedes repetir casilla......\n\n");
    printf("\tDispones de 16 dados con 6 letras cada uno\n"
            "\t\"HFSIEE\" \"RFXIOA\" \"NSRHIE\" \"ZNDVAE\"\n"
            "\t\"PLSTUE\" \"TAAEIO\" \"LWRUIE\" \"CRALES\"\n"
            "\t\"SIRMOA\" \"KEUNOT\" \"QMBJAO\" \"BTLRAI\"\n"
            "\t\"DMCPAE\" \"GNLYUE\" \"SNDTOE\" \"VTNGEI\"\n"
          );

    printf("\n");
    printf("\tPara tirar los dados pulsa \"s\"\n"
            "\tPara salir pulsa \"n\"\n\t");
    scanf("\t %c", &respuesta);

    if (respuesta == 's'){

        printf("\t...Tirando dados...\n\n\n");
        //	progress();

        /* con éste bucle meneamos cada dado y rellenamos letras_ordenadas[16] con una letra aleatoria de cada dado */

        for(int l=0,d=0; l<16,d<16; l++,d++){

            letras_ordenadas[l] = DADOS[d][menea_cara()];

            printf ("\tdado[%i], letra[%i] = \"%c\"\n", d,menea_cara(), letras_ordenadas[l]);

            sleep(1);
        }
        /* al finalizar este for tengo letras_oredenandas[16], con un orden inicial, tengo que desordenarlos...*/

        printf("\n");

        // copiar ordenadas a desordenadas

        strncpy(letras_desordenadas, letras_ordenadas, 16);

        //desordenar desordenadas

        qsort(letras_desordenadas, 16, sizeof(char), cmpfunc);

        printf ("\n");

        // Generar tablero con letras_desordenadas

        printf("\t...Generando tablero...\n");
        progress();

        printf("\n\n");

        rellena_tablero(letras_desordenadas);


        /*

           for (int fila=0; fila<4; fila++){
           printf("\t");

           b+=4;  

           for (int col=0, i=a; col<4, i<b; col++, i++){
           tablero[fila][col] = letras_desordenadas[i];
           printf ("%c ", tablero[fila][col]);
           printf("\t");

           }

           a+=4;

           printf("\n\n");

           }
           */
        // Ahora introducimos una paralra y la convertimos en mayusculas para compararla luego con tabla//



        /* A partir de aqui tengo que ver como introduzco la función buscapalabra2.cpp */


        do{
            printf("\tAhora tienes q introducir una palabra:");
            scanf(" %s", palabra_intro);

            for(int i=0; i<strlen(palabra_intro)-1; i++){
                palabra_intro_mays[i] = toupper(palabra_intro[i]);

            }

            coincidencia = buscar_palabra(palabra_intro_mays, letras_desordenadas);




            if (coincidencia == true)
                printf("\tpalabra encontrada\n");
            if (coincidencia == false)
                printf("\tpalabra no encontrada\n");
        }while(palabra_intro[0] != '\t');



        return EXIT_SUCCESS;
    }

    else (respuesta == 'n');

    printf("\t.....gracias por jugar.....\n");

    return EXIT_SUCCESS;

}
