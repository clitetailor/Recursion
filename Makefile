all:
	g++ -c Check.c
	g++ -c NoRecursion.c
	g++ -c Recursion.c
	g++ -o Check.exe NoRecursion.o Recursion.o Check.o