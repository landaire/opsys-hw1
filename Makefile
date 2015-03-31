CC=gcc
CFLAGS=-I.
DEPS = ints.h print_helper.h words.h chars.h
OBJ = cscd340asgn1.o ints.o print_helper.o words.o chars.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hw1: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
