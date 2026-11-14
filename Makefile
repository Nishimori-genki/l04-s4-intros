CC = gcc
SRC = main.c
OUT = main

all:
	$(CC) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
