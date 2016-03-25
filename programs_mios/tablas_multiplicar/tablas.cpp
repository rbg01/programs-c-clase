#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){


    int i,j;//r=0;

    for (i=1; i<=10; i++){
        printf("tabla del %i:\n", i);
        for(j=1; j<=10; j++){
            //r = i * j;
            printf("%i * %i = %i\n", i, j, i*j);
        }
        printf("\n");
    }





	return EXIT_SUCCESS;
}
