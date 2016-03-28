

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#define MAXTABL 8
#define MAXDAD 64
#define DADOCARAS 6
extern bool buscala(char *letras, bool *comp, char *palabra, int longitud);
extern void pintar_tablero(char *letras);
extern  void tira_dados(const  char *DADOS, char *letras);
extern  int menea_cara();
extern  int menea_dados();
extern  int cmpfunc(const void *a, const void *b);
extern  void progress();


#endif
