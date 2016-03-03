all:
	gcc -c NoRecursion.c
	gcc -c CheckNoRecursion.c
	gcc -o main.exe NoRecursion.o CheckNoRecursion.o