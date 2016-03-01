#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv){

    int cont=0,
	fila=0,
	col=0,
	match=0,
	i=0,
	fin=0,
	j=0;
    bool resultado=  true;
    char palabra_intro[25],
	 array[]= {"ESIUEAIIDLIBQRND"},
	 letra;



    printf ("introduce una palabra:  \n");
    fgets(palabra_intro, 25, stdin);

    fin = strlen(palabra_intro);




    for (j; j<fin; j++){

	if (array[i] != palabra_intro[j]){
	   // match+=1;
	    i+=1;
	} else
	    match+=1;
	    i+=1;
//	printf("%c", palabra_intro[j]);
//	printf("%c", array[i]);
    }

    for (j=0, i=0; j<fin, i<fin; j++, i++){

	printf("%c", palabra_intro[j]);
	printf("%c", array[i]);
    }


    if (fin == match){
	resultado = true;
	printf("\nLa palabra \"%s\" ha sido encontrada", palabra_intro);
    } else
	resultado = false;
    printf("\nLa palabra \"%s\" NO ha sido encontrada", palabra_intro);





    printf ("%i\n", resultado);
    printf("%i   %i\n", match, i);







    return EXIT_SUCCESS;
}
