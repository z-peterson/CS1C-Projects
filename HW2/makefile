CC=g++
FLAGS= -std=c++14 -Wall -g
OBJS= deck.o card.o

all:hw02

hw02:main.cpp deck.o card.o
	$(CC) $(FLAGS) main.cpp -o hw02 $(OBJS)

deck.o: deck.cpp deck.h
	$(CC) $(FLAGS) -c deck.cpp -o deck.o

card.o: card.cpp card.h
	$(CC) $(FLAGS) -c card.cpp -o card.o
clean:
	rm *.o hw02 hw02.tar

tar:
	tar cf hw02.tar hw02.scr makefile main.cpp deck.h deck.cpp card.h card.cpp
