all:
	g++ -c NoRecursion.c
	g++ -o main.exe NoRecursion.o

test:
	gcc -c Recursion.c
	gcc -o main.exe Recursion.o	