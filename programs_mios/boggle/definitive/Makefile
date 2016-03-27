

CC = g++

boggle_main: boggle_main.o functions.o
	$(CC) boggle_main.o functions.o -o boggle_main


boggle_main.o: boggle_main.cpp functions.h
	$(CC) -c boggle_main.cpp


functions.o: functions.cpp functions.h
	$(CC) -c functions.cpp


.PHONY: clean

clean:
	rm *.o boggle_main

