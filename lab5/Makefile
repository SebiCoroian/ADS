# Makefile

SRC = lab5.c array-io.c
HEADERS = array-io.h
OUT = array-io

all: $(OUT)

$(OUT): $(SRC) $(HEADERS) 
	gcc -o $(OUT) $(SRC)

run:
	./$(OUT)
.PHONY: run