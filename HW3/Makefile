CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = employee.o date.o programmer.o architect.o

all:hw03

hw03: hw03.cpp employee.o date.o programmer.o architect.o
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

employee.o: employee.cpp employee.h
	$(CC) $(FLAGS) -c employee.cpp -o employee.o

date.o: date.cpp date.h
	$(CC) $(FLAGS) -c date.cpp -o date.o

programmer.o: programmer.cpp programmer.h
	$(CC) $(FLAGS) -c programmer.cpp -o programmer.o

architect.o: architect.cpp architect.h
	$(CC) $(FLAGS) -c architect.cpp -o architect.o

clean:
	rm *.o hw03 hw03.tar

tar:
	tar cf hw03.tar hw03.scr Makefile hw03.cpp employee.h employee.cpp date.h date.cpp programmer.cpp programmer.h architect.cpp architect.h

