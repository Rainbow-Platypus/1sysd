CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c99

all: paths hist factorial invertcase circle

paths: paths.c
	$(CC) $(CFLAGS) -o paths paths.c

hist: hist.c
	$(CC) $(CFLAGS) -o hist hist.c

factorial: factorial.c
	$(CC) $(CFLAGS) -o factorial factorial.c

invertcase: invertcase.c
	$(CC) $(CFLAGS) -o invertcase invertcase.c

circle: circle.c
	$(CC) $(CFLAGS) -o circle circle.c

clean:
	rm -f paths hist factorial invertcase circle
