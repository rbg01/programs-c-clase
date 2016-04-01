#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, const char **argv){
    int i; //variable contador para el bucle

    for(i=0; i<256; i++)//bucle for que recorre los 256 caracteres ASCII
    {
        printf("%d\t-\t%c\n", i, i);//imprimimos el número y el caracter
    }
    return EXIT_SUCCESS;
}

