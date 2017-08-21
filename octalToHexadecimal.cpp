/*
OVERVIEW:
1)Write a function which takes a octal number as input and returns the hexadecimal number for 
  octalToHexadecimal().
E.g.: octalToHexadecimal(10) returns 8.

2)Write a function which takes a fractional octal number as input and returns the hexadecimal number for 
octalToHexadecimalFraction() until precision two
E.g.: octalToHexadecimal(6.01) returns 6.04

INPUTS: Single octal number num;

OUTPUT: hexadecimal value of the octal number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>
int octalToHexadecimal(long int num)
{

	int x, s = 0;
	int *a = (int *)calloc(sizeof(int), 1000);
	int p = 0, i;
	int *b = (int *)calloc(sizeof(int), 1000);
	int  y = 0, q = 0;
	if (num < 0)
		return 0;
	while (num > 0)
	{
		x = num % 10;
		num = num / 10;
		a[q++] = x;
	}
	for (i = q - 1; i >= 0; i--)
	{
		p = 3 * (s + 1) - 1;
		s++;
		while (a[i] != 0)
		{
			x = a[i] % 2;
			a[i] = a[i] / 2;
			b[p--] = x;
		}
	}
	p = 3 * s,
		q = 0;
	for (i = p - 1; i >= 0; i--)
	{
		a[q] = a[q] + b[i] * pow(2.0, y);
		if (y == 3)
		{
			y = -1;
			q++;
		}
		y++;
	}
	s = 0;
	for (i = q; i >= 0; i--)
	{
		s = s * 10 + a[i];
	}
	return s;
}

float octalToHexadecimalFraction(float num)
{
	return 0.0;
}