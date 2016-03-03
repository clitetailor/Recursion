#ifndef H_RECURSION
#define H_RECURSION

#include <stdbool.h>

#ifndef H_STACK
#define H_STACK



struct stack
{
	int * data;
	int top;
};

typedef struct stack Stack;

bool createStack(Stack **a, int n);

bool isFull(Stack *a);
bool isEmpty(Stack *a);

void push(Stack *a, int data);
int pop(Stack *a);

int getTop(Stack *a);
#endif


#endif