#include <stdbool.h>

#include "NoRecursion.h"

bool createStack(Stack **a, int n)
{
	(*a) = (Stack *) malloc( sizeof(Stack) );
	
	if ( (*a) == NULL )
	{
		return false;
	}
	
	(*a)->data = (int *) malloc(sizeof(int));
	
	if ( (*a)->data == NULL )
	{
		return false;
	}
	
	(*a)->top = 0;
	
	return true;
}

bool isFull(Stack *a)
{
	if (a->top == STACK_SIZE)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty(Stack *a)
{
	if (a->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push(Stack *a, int data)
{
	a->data[ a->top ] = *data;
	a->top ++;
}

int pop(Stack *a)
{
	a->top --;
	*data = a->data[ a->top ];
}

int getTop(Stack *a)
{
	return a->data[ a->top - 1 ];
}