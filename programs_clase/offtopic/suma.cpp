#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int op1,
	op2,
	op3;

    if (argc < 4){
	fprintf(stderr, "Necesitas tres operandos.\n");
	return EXIT_FAILURE;
    }

    op1 = atoi(argv[1]);
    op2 = atoi(argv[2]);
    op3 = atoi(argv[3]);

    printf ("%i\n", op1 + op2 + op3);

    	return EXIT_SUCCESS;
}
