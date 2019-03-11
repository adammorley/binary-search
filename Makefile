CC=clang
CFLAGS=-I. -g
DEPS=../merge-sort/sort.c

all: test

clean:
	rm -f test *.o

test: test.c search.c
	$(CC) -o test test.c search.c $(DEPS) $(CFLAGS)
