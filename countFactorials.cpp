/*Problem - To find the number of factorials in a given range.

Description - You will be given an input array[l, h] which gives the range.
Your job is to return the count of the number of factorials between 'l' and 'h' 
both included.

Example: input = [2, 10]
		 The factorails between 2 and 10 is '2' alone.Hence 1 must be returned.


Constraints :
1) The range should not be negative, i.e neither of l and h should be negative.If so, return -1.
2) l, h are both long integers.
3) The range should be non decreasing, i.e l <= h.It is not, return -1.

DONT CHANGE THE FUNCTION HEADERS.



*/

#include <stdio.h>
int countFactorials(long l, long h)
{
	
	int flag1 = 1, flag2 = 1;
	if (l > h || (l < 0 || h < 0))//false condition
		return -1;

	if (l >= 0 && h >= 0)
	{
		if (l == 0)
		        	flag2 = 2;
		while (flag1 < l)
		{
			      flag1 = flag1*flag2;
			      flag2++;
		}
		int count = 0;
		while (flag1 <= h)
		{
			    flag1 = flag1*flag2;
		     	flag2++;
		     	count++;
		}

		return count;
	}
}



