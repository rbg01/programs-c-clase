#include <stdio.h>
#include <stdlib.h>

int main(){

    char buffer[5];

    printf("say something: ");
    //scanf(" %s", buffer);
    fgets(buffer, 6, stdin);
    printf("%s\n", buffer);






	return EXIT_SUCCESS;
}
