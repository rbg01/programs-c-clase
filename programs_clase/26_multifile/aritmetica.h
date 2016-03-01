/* Archivo *.h que incluye la declaración de las funciones como externas
 * que incluimos en calculadora.cpp con el #include "aritmetica.h"*/

    //si no está definida '__ARITMETICA_H__',,,
    //se define, sino; pues sale del if...
#ifndef __ARITMETICA_H__
#define __ARITMETICA_H__

extern int suma(int op1, int op2);
extern int rest(int op1, int op2);
extern int mult(int op1, int op2);
extern int divi(int op1, int op2);


#endif
