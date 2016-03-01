#include <stdio.h>
#include <stdlib.h>

#define EOLN '\n'

void inverso(void); /*prototipo de función*/


int main(){

    printf("introduce una línea de texto debajo\n");
    inverso();

	return EXIT_SUCCESS;
}

void inverso(void) {

    char c;
    if ((c = getchar()) != EOLN) inverso();
    putchar(c);
    return;
}
