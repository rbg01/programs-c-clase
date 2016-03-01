#include <stdio.h>
#include <stdlib.h>

int main(){

    int input1 = 0, input2 = 0,
        num_a, num_b;

    //solicitar entrada
    
    printf("Dame un número...");
    scanf(" %i", &num_a);
    printf("Dame otro número...");
    scanf(" %i", &num_b);

    if ( num_a > num_b ){
        input1 = num_a;
        input2 = num_b;
    } else {
        input1 = num_b;
        input2 = num_a;
    }

    
        

    printf ("%i / %i", input1, input2);








	return EXIT_SUCCESS;
}
