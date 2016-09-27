#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char **argv){

    int op_1, op_2;

    if (argc == 1)
        printf("Ingresa dos numeros, si éso...\n");

    for(int i=0; i < argc; i++)
        printf ("%s\n", argv[i]);


    op_1 = atoi(argv[1]);
    op_2 = atoi(argv[2]);

    printf("%s + %s = %i\n", argv[1], argv[2], op_1 + op_2);

    return EXIT_SUCCESS;

}
