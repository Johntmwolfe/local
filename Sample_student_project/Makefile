.PHONY: all
all: build archive doc

.PHONY: build
build: game

.PHONY: archive
archive: archive.tar.gz

.PHONY: doc
doc: game.cc game.h main.cc othello.cc othello.h piece.h colors.h doxygen.cfg
	doxygen doxygen.cfg

.PHONY: clean
clean:
	-rm -rf game *.o archive.tar.gz *.h.gch core html/ latex/

archive.tar.gz: *.cc *.h Makefile
	tar -czf $@ $^

game: main.o game.o othello.o
	g++ -o $@ $^

main.o: main.cc game.h othello.h
	g++ -c main.cc

game.o: game.cc game.h
	g++ -c game.cc

othello.o: othello.cc othello.h
	g++ -c othello.cc
