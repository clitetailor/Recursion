#include <stdio.h>
#include <math.h>
#include "Recursion.h"

// Sequence 1:

int seq1sumrec(int para)
{
	return seq1sumtailrec(para, 1, 2, 3, 6);
}

int seq1sumtailrec(int para, int a0, int a1, int a2, int sum)
{
	if (para > 2)
	{
		return seq1sumtailrec(para - 1, a1, a2, a0 + a1 + a2, sum + a0 + a1 + a2);
	}
	else if (para == 2)
	{
		return sum;
	}
	else if (para == 1)
	{
		return a1 + a0;
	}
	else if (para == 0)
	{
		return a0;
	}
	else
	{
		return -1;
	}
}


int seq1rec(int para)
{
	return seq1tailrec(para, 1, 2, 3);
}

int seq1tailrec(int para, int a0, int a1, int a2)
{
	if (para > 2)
	{
		return seq1tailrec(para - 1, a1, a2, a0 + a1 + a2);
	}
	else if (para == 2)
	{
		return a2;
	}
	else if (para == 1)
	{
		return a1;
	}
	else if (para == 0)
	{
		return a0;
	}
	else
	{
		return -1;
	}
}

// Sequence 2:



// Sequence 3:

int seq3sumrec(int para)
{
	return seq3sumtailrec(para, 1, 2, 3, 4, 10);
}

int seq3sumtailrec(int para, int a0, int a1, int a2, int a3, int sum)
{
	if (para > 3)
	{
		return seq3sumtailrec(para - 1, a1, a2, a3, a0 + a1 - a2 + a3, sum + a0 + a1 - a2 + a3);
	}
	else if (para == 3)
	{
		return sum;
	}
	else if (para == 2)
	{
		return a2 + a1 + a0;
	}
	else if (para == 1)
	{
		return a1 + a0;
	}
	else if (para == 0)
	{
		return a0;
	}
	else
	{
		return -1;
	}
}

int seq3rec(int para)
{
	return seq3tailrec(para, 1, 2, 3, 4);
}

int seq3tailrec(int para, int a0, int a1, int a2, int a3)
{
	if (para > 3)
	{
		return seq3tailrec(para - 1, a1, a2, a3, a0 + a1 - a2 + a3);
	}
	else if (para == 3)
	{
		return a3;
	}
	else if (para == 2)
	{
		return a2;
	}
	else if (para == 1)
	{
		return a1;
	}
	else if (para == 0)
	{
		return a0;
	}
	else
	{
		return -1;
	}
}

// Sequence 4:

int seq4sumrec(int para)
{
	return seq4sumtailrec(para, 1, 2, 3, 4, 10);
}

int seq4sumtailrec(int para, int a0, int a1, int a2, int a3, int sum)
{
	if (para > 3)
	{
		return seq4sumtailrec(para - 1, a1, a2, a3, a0 - a1 + a2 + a3, sum + a0 - a1 + a2 + a3);
	}
	else if (para == 3)
	{
		return sum;
	}
	else if (para == 2)
	{
		return a2 + a1 + a0;
	}
	else if (para == 1)
	{
		return a1 + a0;
	}
	else if (para == 0)
	{
		return a0;
	}
	else
	{
		return -1;
	}
}

int seq4rec(int para)
{
	return seq3tailrec(para, 1, 2, 3, 4);
}

int seq4tailrec(int para, int a0, int a1, int a2, int a3)
{
	if (para > 3)
	{
		return seq4tailrec(para - 1, a1, a2, a3, a0 - a1 + a2 + a3);
	}
	else if (para == 3)
	{
		return a3;
	}
	else if (para == 2)
	{
		return a2;
	}
	else if (para == 1)
	{
		return a1;
	}
	else if (para == 0)
	{
		return a0;
	}
	else
	{
		return -1;
	}
}

// Sequence 5:

float seq5rec(int para)
{
	float X[para + 1];
	
	int i;
	for (i = 0; i <= para; ++i)
	{
		X[i] = 0;
	}
	
	seq5tailrec(para, X);
	return X[para];
}

void seq5tailrec(int para, float * arr)
{
	if (para == 0)
	{
		arr[0] = 1;
	}
	else
	{
		seq5tailrec(para - 1, arr);
		
		int i;
		for (i = 0; i < para; ++i)
		{
			arr[para] += cbrt(para - i) * arr[i];
		}
	}
}