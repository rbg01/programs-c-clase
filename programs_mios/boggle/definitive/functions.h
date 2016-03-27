

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#define MAXTABL 4
#define MAXDAD 16
#define DADOCARAS 6

extern void pintar_tablero(char letras[MAXTABL][MAXTABL]);
extern  void tira_dados(const  char DADOS[MAXDAD][DADOCARAS], char letras_ordenadas[MAXTABL][MAXTABL]);
extern  int menea_cara();
extern  int menea_dados();
extern  int cmpfunc(const void *a, const void *b);
extern  void progress();


#endif