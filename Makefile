CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -lncurses
# OBJS = 

all: gamesuite

#gamesuite: gamesuite.c
#	$(CC) $(CFLAGS) -o $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o gamesuite

