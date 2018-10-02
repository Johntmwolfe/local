CC = g++

game: main.o othello.o game.o
	$(CC) main.o othello.o game.o 

.c.o:
	$(CC) -c $<

main.cc: othello.h game.h
	$(CC) othello.h game.h

game.cc: game.h
	$(CC) game.h

othello.cc: othello.h
	$(CC) othello.h

othello.h: piece.h colors.h
	$(CC) piece.h colors.h

all: build archive

build:
	make game

archive:
	tar czvf HW5.tgz game main.cc othello.cc game.cc othello.h game.h piece.h colors.h makefile

clean:
	-rm core
	-rm *.o
	-rm *.h.gch
