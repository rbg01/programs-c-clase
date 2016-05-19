

  /*  Multiplicación a la rusa  */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int multiplicando[100];
    int multiplicador[100];
    int cociente = 0,
        contador =0,
        total = 0;

    /*  Solicita y asigna datos */
    printf("introduce un multiplicando: \n");
    scanf(" %i", multiplicando);

    printf("introduce un multiplicador: \n");
    scanf(" %i", multiplicador);



   do{
       cociente = multiplicador[contador] / 2;
       multiplicador[++contador] = cociente;

    } while(cociente >= 1);

   for(int i=0; i<contador;){
       int num = multiplicando[i] * 2;
       multiplicando[++i] = num;
   }

   printf("\n");
   for(int i=0; i<contador; i++){
       if(multiplicador[i] % 2 != 0)
           total += multiplicando[i];

   }

   printf("%i x %i = %i\n",multiplicando[0], multiplicador[0], total);


	return EXIT_SUCCESS;
}
