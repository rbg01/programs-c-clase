CC=g++
LDLIBS=-lallegro

final: suma.o main.o
	$(CC) suma.o main.o -o final $(LDLIBS)

suma.o: suma.cpp suma.h
	$(CC) -c suma.cpp

main.o: main.cpp suma.h
	$(CC) -c main.cpp

.PHONY: clean

clean:
	rm *.o final
