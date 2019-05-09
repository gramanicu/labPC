# Copyright 2018 Grama Nicolae
# se presupune ca fisierul sursa are acelasi nume ca executabilul
CC = gcc
CFLAGS = -lm -Wall -Wextra -std=c99
EXE = ex1


# compilarea programului
build: $(EXE).c
		$(CC) -o $(EXE) $^ $(CFLAGS)

# ruleaza programul
run: build
		./$(EXE)

# sterge executabilul
clean:
	rm -f $(EXE)

.PHONY:clean

# face coding-style automat, la standardul google, cu o mica modificare
# (4 spatii in loc de 2 la alineate)
beauty: 
	clang-format -i -style=file *.c

.PHONY:beauty