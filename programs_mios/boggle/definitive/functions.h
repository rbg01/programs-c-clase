

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#define MAXTABL 8
#define MAXDAD 64
#define DADOCARAS 6
extern bool buscala(char letras[MAXTABL][MAXTABL], bool comp[MAXTABL][MAXTABL], char palabra[], int longitud);
extern void pintar_tablero(char letras[MAXTABL][MAXTABL]);
extern  void tira_dados(const  char DADOS[MAXDAD][DADOCARAS], char letras_ordenadas[MAXTABL][MAXTABL]);
extern  int menea_cara();
extern  int menea_dados();
extern  int cmpfunc(const void *a, const void *b);
extern  void progress();


#endif
