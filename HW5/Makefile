CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS =

all:hw05

hw05: hw05.cpp
	$(CC) $(FLAGS) hw05.cpp -o hw05 $(OBJS)
clean:
	rm *.o hw05 hw05.tar

tar:
	tar cf hw05.tar hw05.scr Makefile
