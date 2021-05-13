CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = item.o

all:hw07

hw05: hw07.cpp
	$(CC) $(FLAGS) hw07.cpp -o hw07 $(OBJS)

item.o: item.h
	$(CC) $(FLAGS) -o item.o

clean:
	rm *.o hw07 hw07.tar item.o

tar:
	tar cf hw07.cpp item.h hw07.scr Makefile
