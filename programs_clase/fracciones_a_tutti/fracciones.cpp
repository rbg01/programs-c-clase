


/*  Calcular fracciones recursivamente  */



#include <stdio.h>
#include <stdlib.h>


struct Tcallas {

    int cima;
    int *data;

};

void init(struct Tcallas *calamar){

    calamar->cima = 0;
    calamar->data = NULL;
}

void registra_entrada(struct Tcallas *calamar ){

    int buffer;

    do{
        scanf(" %i", &buffer);
        calamar->data = (int *) realloc(calamar->data, (calamar->cima + 1) * sizeof(int));
        calamar->data[calamar->cima++] = buffer;
    }while(buffer != 0);

    calamar->cima--;
    calamar->cima--;
}

void imprime(struct Tcallas *calamar){

    for(int i=0; i<=calamar->cima; i++)
        printf("%i", calamar->data[i]);
    printf("\n");
}

double opera(struct Tcallas *calamar){

    
    double resultado = 0;

    for(int i=calamar->cima; i>=0; i--){
        resultado +=  calamar->data[i];
        resultado = 1 / resultado;

        printf("resultado=%lf, i=%i\n", resultado,i);

    }
    return resultado;
}
int main(int argc, const char **argv){

    struct Tcallas calamar;

    init(&calamar);

    registra_entrada(&calamar);

    imprime(&calamar);

    printf("%lf\n", opera(&calamar));

    

    free(calamar.data);




    return EXIT_SUCCESS;
}
