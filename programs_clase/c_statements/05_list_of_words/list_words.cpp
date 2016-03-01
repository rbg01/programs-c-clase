#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    const char *list[] = {
	"bread",
	"toast",
	"bacon"
    };
    int elemento[3];

    for (int i=0; i<=4; i++){
	elemento[i] = sizeof(list[i]);

	printf ("elemento %i = %i\n", i, elemento[i]);
    printf ("list %i = %i\n", i, sizeof(list[i]));

        
    }
    





    return EXIT_SUCCESS;
}
