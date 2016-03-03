#include <stdio.h>
#include <math.h>

// Sequence 1:

int seq1(int para)
{
	if (para < 0)
	{
		return -1;
	}
	else if (para == 0)
	{
		return 1;
	}
	else if (para == 1)
	{
		return 2;
	}
	else if (para == 2)
	{
		return 3;
	}
	else if (para > 3)
	{
		int a0, a1, a2, a3;
		a0 = 1; a1 = 2; a2 = 3;
		
		int i;
		for (i = 2; i < para; ++i)
		{
			a3 = a0 + a1 + a2;
		}
		
		return a3;
	}
}

// Sequence 2:


// Sequence 3:

int seq3(int para)
{
	if (para < 0)
	{
		return -1;
	}
	else if (para == 0)
	{
		return 1;
	}
	else if (para == 1)
	{
		return 2;
	}
	else if (para == 2)
	{
		return 3;
	}
	else if (para == 3)
	{
		return 4;
	}
	else
	{
		int a0, a1, a2, a3, a4;
		a0 = 1; a1 = 2; a2 = 3, a3 = 4;
		
		int i;
		for (i = 3; i < para; ++i)
		{
			a4 = a0 + a1 - a2 + a3;
			a0 = a1;
			a1 = a2;
			a2 = a3;
			a3 = a4;
		}
		
		return a4;
	}
}

// Sequence 4:

int seq4(int para)
{
	if (para < 0)
	{
		return -1;
	}
	else if (para == 0)
	{
		return 1;
	}
	else if (para == 1)
	{
		return 2;
	}
	else if (para == 2)
	{
		return 3;
	}
	else if (para == 3)
	{
		return 4;
	}
	else
	{
		int a0, a1, a2, a3, a4;
		a0 = 1; a1 = 2; a2 = 3, a3 = 4;
		
		int i;
		for (i = 3; i < para; ++i)
		{
			a4 = a0 - a1 + a2 + a3;
			a0 = a1;
			a1 = a2;
			a2 = a3;
			a3 = a4;
		}
		
		return a4;
	}
}

// Sequence 5:

float seq5(int para)
{
	float X[para + 1];
	
	int i;
	for (i = 0; i <= para; ++i)
	{
		X[i] = 0;
	}
	
	X[0] = 1;
	
	int j;
	for (i = 1; i <= para; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			X[i] += cbrt(para - j) * X[j];
		}
	}
	
	return X[para];
}

int main()
{
	int n;
	fflush(stdin);
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%.2f  ", seq5(i));
	}
	
	return 0;
}