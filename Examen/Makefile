CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c99
LDFLAGS=-lm
PROGRAMS = paths hist factorial invertcase circle

all: $(PROGRAMS)

paths: paths.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

hist: hist.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

factorial: factorial.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

invertcase: invertcase.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

circle: circle.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(PROGRAMS)
