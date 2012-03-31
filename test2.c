#include <stdlib.h>
#include <stdio.h>

// Helper functions.
void makeRecursiveArray(int * array);
void makeIterativeArray(int * array);
int getFibonacciNumber(int n);

// Generates the first 10 numbers of the Fibonacci sequence and then returns the last one.
int main(void)
{
	int array1[10];
	int array2[10];

	makeRecursiveArray(array1);
	makeIterativeArray(array2);

	int i;

	for(i = 0; i < 10; i++)
	{
		if(array1[i] == array2[i])
		{
			printf("Elements at position %d of both arrays match and are equal to %d.\n", i, array1[i]);
		}
		else
		{
			printf("Elements at position %d differ: array 1[%d] = %d and array 2[%d] = %d.\n", i, i, array1[i], i, array2[i]);
		}
	}
	return 1;
}

void makeRecursiveArray(int * array)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		*(array + i) = getFibonacciNumber(i);
	}
}

void makeIterativeArray(int * array)
{
	int i;

	// Base cases.
	*array = 1;
	*(array+1) = 1;
	
	// Generate the rest of the sequence.
	while(i < 10)
	{
		*(array + i) = *(array + i - 1) + *(array + i - 2);
		i++;
	}
}

int getFibonacciNumber(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return getFibonacciNumber(n - 1) + getFibonacciNumber(n - 2);
	}
}
