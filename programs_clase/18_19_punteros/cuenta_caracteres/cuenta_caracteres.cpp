#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void analizar(char *frase,int *pv,int *pc,int *pd,int *pw,int *po){

    char c;

    for (int i=0; frase[i] != '\0'; i++){

	c = toupper(frase[i]);

	if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	    *pv+=1;

	else if ((c>'A' && c<'E')||(c>'E' && c<'I')||(c>'I' && c<'O')||(c>'O' && c<'U')||(c>'U' && c<'Z'))
	    *pc+=1;

	else if (c>='0' && c<='9')
	    *pd+=1;

	else if (c==' ' || c=='\t')
	    *pw+=1;

	else
	    *po+=1;
    }
    return;
}

int main(int argc, const char **argv){

    char frase[100];

    int voc=0,
	con=0,
	dig=0,
	wsp=0,
	otr=0;

    int *pv,
	*pc,
	*pd,
	*pw,
	*po;

    pv = &voc;
    pc = &con;
    pd = &dig;
    pw = &wsp;
    po = &otr;

    printf ("Introduce una linea de texto debajo:\n");
    scanf (" %[^\n]", frase);

    analizar(frase,pv,pc,pd,pw,po);

    printf("Vocales: %i\n"
	    "Consonantes: %i\n"
	    "Dígitos: %i\n"
	    "Blancos: %i\n"
	    "Otros: %i\n", voc,con,dig,wsp,otr);


	return EXIT_SUCCESS;
}
