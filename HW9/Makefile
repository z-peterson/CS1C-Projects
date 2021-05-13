CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Shape.o Triangle.o Rectangle.o

all:hw09

hw05: hw09.cpp Shape.o Triangle.o Rectangle.o
	$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

Shape.o: Shape.h
	$(CC) $(FLAGS) -o Shape.o

Triangle.o: Triangle.h
	$(CC) $(FLAGS) -o Triangle.o

Rectangle.o: Rectangle.h
	$(CC) $(FLAGS) -o Rectangle.o

clean:
	rm *.o hw09 hw09.tar

tar:
	tar cf hw09.tar hw09.scr Makefile hw09.cpp Shape.h Triangle.h Rectangle.h

