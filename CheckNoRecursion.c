#include <stdio.h>

void Subset()
{
	Stack *a;
	createStack(&a, 5);
	
	int i = 0;
	int subset[5];
	do
	{
		subset[i] = i;
		
		if (!isFull(a))
		{
			push(a, i);
		}
		
		
		if (!isEmpty(a))
		{
			i = pop(a);
		}
		
	} while (!isEmpty(a));
	
}

int main(int argc, char ** argv)
{
	Subset();
	
	return 0;
}