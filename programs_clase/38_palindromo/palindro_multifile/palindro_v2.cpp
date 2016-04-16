#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "functions.h"

#define N 0x100



int main (int argc, char **argv){


    FILE *pf = NULL;
    char buffer[N];
    struct Stack pila, reves;

    char *letra;

    a_cero(&pila);
    a_cero(&reves);


    //-->Si falla al abrir file, o no la encuentra, mensaje error

    if (argc < 2){
        fprintf(stderr, "Usage: %s <File to open>", argv[0]);
        return EXIT_FAILURE;
    }

    if (!(pf = fopen(argv[1], "r+"))){
        fprintf(stderr, "File %s not found", argv[1]);
        return EXIT_FAILURE;
    }

    do {
        fscanf(pf, " %s", buffer);//Escaneamos desde pf hasta el primer WS y guardamos en buffer
        letra = buffer;//¿letra = buffer, que coño es letra? un array de char?

        do {
            push(*letra, &pila);
        }while(*letra++ != '\0');

        pop(&pila); //sacamos el carácter \0 de pila

        do {
            push(pop(&pila), &reves);
        }while(pila.cima > 0);

        push('\0', &reves); //Ponemos '\0' al final de reves

        if (strcmp(buffer, reves.data) == 0)
            printf("\t%s\n", buffer);

        a_cero(&pila);
        a_cero(&reves);

    }while(!feof(pf));


    fclose(pf);

    return EXIT_SUCCESS;
}
