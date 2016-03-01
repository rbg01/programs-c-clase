CC=g++

matrices: marrick.o multiplica.o matrices.o
	$(CC) marrick.o multiplica.o matrices.o -o matrices


marrick.o: marrick.cpp marrick.h
	$(CC) -c marrick.cpp


multiplica.o: multiplica.cpp multiplica.h
	$(CC) -c multiplica.cpp


matrices.o: matrices.cpp matrices.h
	$(CC) -c matrices.cpp


.PHONY: clean

clean:
	rm *.o matrices


