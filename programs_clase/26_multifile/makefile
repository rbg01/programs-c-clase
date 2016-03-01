CC=g++


calc: aritmetica.o calculadora.o
	$(CC) aritmetica.o calculadora.o -o calc

aritmetica.o : aritmetica.cpp aritmetica.h
	$(CC) -c aritmetica.cpp

calculadora.o : calculadora.cpp aritmetica.h
	$(CC) -c calculadora.cpp

.PHONY : clean

clean :
	rm *.o calc
