all: iterative recursive

iterative: iterative.c
	gcc -g -Wall -Werror iterative.c -o iterative
	
recursive: recursive.c
	gcc -g -Wall -Werror recursive.c -o recursive
	
clean:
	rm -f iterative recursive
