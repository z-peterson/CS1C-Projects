CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = employee.o date.o programmer.o architect.o

all:hw04

hw04: hw04.cpp employee.o date.o programmer.o architect.o
	$(CC) $(FLAGS) hw04.cpp -o hw04 $(OBJS)

employee.o: employee.cpp employee.h
	$(CC) $(FLAGS) -c employee.cpp -o employee.o

date.o: date.cpp date.h
	$(CC) $(FLAGS) -c date.cpp -o date.o

programmer.o: programmer.cpp programmer.h
	$(CC) $(FLAGS) -c programmer.cpp -o programmer.o

architect.o: architect.cpp architect.h
	$(CC) $(FLAGS) -c architect.cpp -o architect.o

clean:
	rm *.o hw04 hw04.tar

tar:
	tar cf hw03.tar hw04.scr Makefile hw04.cpp employee.h employee.cpp date.h date.cpp programmer.cpp programmer.h architect.cpp architect.h

