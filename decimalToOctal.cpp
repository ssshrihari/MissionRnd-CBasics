/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>

int decimalToOctal(int num)
{

	if (num == 0 || num<0)//false condtion
		return 0;

	int octal[100], i = 1, j, quotient;
	int new_num = 0;
	
	quotient = num;
	while (quotient > 0)
	{
		octal[i] = quotient % 8;//spliting
		quotient = quotient / 8;
		i++;
	}

	for (j = i - 1; j >0; j--)
	{
		new_num = (new_num * 10) + octal[j];
	}
	return new_num;
}

float decimalToOctalFraction(float num)
{
	return 0.0;
}

