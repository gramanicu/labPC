CC = gcc
CFLAGS = -Wall -std=c99
EXE1 = ex51
EXE2 = ex52

build: 
	$(CC) -o $(EXE1) $(EXE1).c $(CFLAGS)
	$(CC) -o $(EXE2) $(EXE2).c $(CFLAGS)
pack:
	zip -FSr laborator7.zip $(EXE1).c $(EXE2).c Makefile

clear: 
	rm -f $(EXE1) $(EXE2)