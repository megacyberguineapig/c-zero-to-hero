CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -g

all: helloworld

helloworld: helloworld.c
	$(CC) $(CFLAGS) helloworld.c -o helloworld

run: helloworld
	./helloworld

clean:
	rm -f helloworld
