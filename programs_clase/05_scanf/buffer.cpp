
  /* fgets */

#include <stdio.h>
#include <stdlib.h>

int main(){

    char buffer[5];

    printf("say something: ");
    //scanf(" %s", buffer);
    fgets(buffer, 6, stdin);  //-->coge 6 char de stdin y ponmelos en buffer
    printf("%s\n", buffer);






	return EXIT_SUCCESS;
}
