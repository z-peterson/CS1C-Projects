CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS =

all:hw06

hw05: hw06.cpp
	$(CC) $(FLAGS) hw06.cpp -o hw06 $(OBJS)
clean:
	rm *.o hw06 hw06.tar

tar:
	tar cf hw06.tar hw06.scr hw06.cpp Makefile
