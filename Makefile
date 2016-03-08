all:
	gcc -c Check.c
	gcc -c NoRecursion.c
	gcc -c Recursion.c
	gcc -o Check.exe NoRecursion.o Recursion.o Check.o