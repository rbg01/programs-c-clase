CC=g++

ejecutable: gartin_marrix.o matriz.o
	$(CC) gartin_marrix.o matriz.o -o ejecutable

gartin_marrix.o: gartin_marrix.cpp gartin_marrix.o
	$(CC) -c gartin_marrix.cpp

matriz.o: matriz.cpp gartin_marrix.o
	$(CC) .c matriz.cpp

.PHONY: clean
	rm *.o ejecutable
