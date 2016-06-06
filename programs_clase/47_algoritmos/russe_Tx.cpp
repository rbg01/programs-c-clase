

/*  Multiplicar a la rusa */

#include <stdio.h>
#include <stdlib.h>

const char *command;

void uso(){

    fprintf(stderr, "\n%smultiplica dos números, siempre que, al menos uno, sea natural (entero positivo)\n", command);
}

void salir(const char *msjn){

    uso();
    fprintf(stderr,"%s\n", msjn);
    exit(1);
}

bool validate(int *multiplicando, int *multiplicador){

    int aux;

    if(*multiplicador > 0)
        return true;

    if(*multiplicando > 0){
        aux = *multiplicando;
        *multiplicando = *multiplicador;
        *multiplicador = aux;
        return true;
    }

    return false;
}


int main(int argc, const char **argv){

    command = argv[0];

    int total = 0;
    int multiplicando, multiplicador;

    printf("Multiplicación (A x B)= ");
    scanf(" %i x %i ", &multiplicando, &multiplicador);

    if(!validate(&multiplicando, &multiplicador))
        salir("Ninguno de lon números que has introducido es natural capullo..");

    printf(" %i x %i = ", multiplicando, multiplicador);


    while(multiplicador >= 1){
        if(multiplicador % 2 == 1)
            total += multiplicando;
        multiplicador >>= 1;
        multiplicando <<= 1;

    }

    printf(" %i\n", total);





	return EXIT_SUCCESS;
}
