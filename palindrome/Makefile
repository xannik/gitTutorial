CC = gcc
HEADERS = palindromeFunc.h
help: 
	@echo make palindrome to build source code
	@echo make clean to remove built executeable

palindrome: test.c $(HEADERS) 
	$(CC) test.c -o $@

clean:
	rm palindrome