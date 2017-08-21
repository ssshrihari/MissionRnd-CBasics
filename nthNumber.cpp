/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: retursn -1 for the error cases
*/
#include <math.h>
#define MAX 100000000
int nthFibonacci(int n)
{
	if (n == 1)
		return 0;
	if (n == 0)
		return -1;
	if (n == 2)
		return 1;
	else if (n>2)
		return nthFibonacci(n - 1) + nthFibonacci(n - 2);
	if (n < 0)
		return -1;
}

int nthPrime(int num)
{
	if (num <= 0)
		return -1;
	int c,m=0,i,j;
	for ( i = 2; i < MAX; i++)
	{
		c = 0;
		for ( j = 1; j <= i; j++)
		{
			if (i%j == 0)
				c++;
		}
		if (c == 2)
			m++;
		if (num == m)
			break;
		
	}


	return i;
}