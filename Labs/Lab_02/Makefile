CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -pedantic -g
DBGFLAGS = -fsanitize=address,undefined -fno-omit-frame-pointer
LDFLAGS =

.PHONY: all run clean

all: lab2

lab2: lab2.c
	$(CC) $(CFLAGS) $(DBGFLAGS) $< -o $@ $(LDFLAGS)

run: lab2
	./lab2

clean:
	rm -f lab2 *.o a.out

