CC = g++

palindro_v2: palindro_v2.o functions.o
	$(CC) palindro_v2.o functions.o -o palindro_v2

palindro_v2.o: palindro_v2.cpp functions.h
	$(CC) -c palindro_v2.cpp

functions.o: functions.cpp functions.h
	$(CC) -c functions.cpp

.PHONY: clean

clean:
	rm *.o palindro_v2
