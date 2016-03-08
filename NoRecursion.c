#include <stdio.h>
#include <math.h>

// Sequence 1:

int seq1sum(int para)
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
		return 3;
	}
	else if (para == 2)
	{
		return 6;
	}
	else if (para > 3)
	{
		int sum = 6;
		int a0, a1, a2, a3;
		a0 = 1; a1 = 2; a2 = 3;
		
		int i;
		for (i = 2; i < para; ++i)
		{
			a3 = a0 + a1 + a2;
			a0 = a1;
			a1 = a2;
			a2 = a3;
			sum += a3;
		}
		
		return sum;
	}
}

// Sequence 2:

int seq2sum(int para)
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
		return 3;
	}
	else if (para == 2)
	{
		return 6;
	}
	else if (para == 3)
	{
		return 13;
	}
	else if (para == 4)
	{
		return 26;
	}
	else
	{
		int a3;
		int a0 = 3, a1 = 7, a2 = 13;
		int sum = 26;
		
		int i;
		for (i = 4; i < para; ++i)
		{
			a3 = a0 + a1 + a2;
			a0 = a1;
			a1 = a2;
			a2 = a3;
			sum += a3;
		}
		
		return sum;
	}
}

// Sequence 3:

int seq3sum(int para)
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
		return 3;
	}
	else if (para == 2)
	{
		return 6;
	}
	else if (para == 3)
	{
		return 10;
	}
	else
	{
		int sum = 10;
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
			sum += a4;
		}
		
		return sum;
	}
}

// Sequence 4:

int seq4sum(int para)
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
		return 3;
	}
	else if (para == 2)
	{
		return 6;
	}
	else if (para == 3)
	{
		return 10;
	}
	else
	{
		int sum = 10;
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
			sum += a4;
		}
		
		return sum;
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
			X[i] += cbrt(i - j) * X[j];
		}
	}
	
	return X[para];
}