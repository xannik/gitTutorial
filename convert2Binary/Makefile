CC = gcc
HEADERS = toBinary.h
help: 
	@echo make build to compile source code
	@echo make clean to remove built executeable

build: test.c $(HEADERS) 
	$(CC) test.c -o toBinary.o

clean:
	rm toBinary.o