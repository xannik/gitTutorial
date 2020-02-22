CC = gcc
HEADERS = sort.h
help: 
	@echo make sort to build source code
	@echo make clean to remove built executeable

build: test.c $(HEADERS) 
	$(CC) test.c -o sort.o

clean:
	rm sort.o