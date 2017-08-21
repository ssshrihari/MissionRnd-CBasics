
/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {

	int len1 = 0, len2 = 0;
	for (len1 = 0; dob1[len1] != '\0'; ++len1);//false condition
	for (len2 = 0; dob2[len2] != '\0'; ++len2);

	if (len1 != 10 || len2 != 10)
		return -1;

	int d1 = 0, d2 = 0, m1 = 0, m2 = 0, y1 = 0, y2 = 0;
	int i, x, j = 1;
	
	
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 5)
		{
			j = 1;
			continue;
		}
		if (i <= 1)
		{
			x = dob1[i] - 48;
			d1 = (d1 * 10) + x;

		}
		if (i <= 4 && i >= 3)
		{

			x = dob1[i] - 48;
			m1 = (m1 * 10) + x;
		}

		if (i <= 9 && i >= 6)
		{

			x = dob1[i] - 48;
			y1 = (y1 * 10) + x;

		}
	}

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 5)
		{
			j = 1;
			continue;
		}
		if (i <= 1)
		{
			x = dob2[i] - 48;
			d2 = (d2 * 10) + x;
		}
		else if (i <= 4 && i >= 3)
		{
			x = dob2[i] - 48;
			m2 = (m2 * 10) + x;
		}
		else if (i <= 9 && i >= 6)
		{
			x = dob2[i] - 48;
			y2 = (y2 * 10) + x;
		}
	}
	//checking if year is false
	if (y1 >= 1 && y1 <= 9999)
	{
		if (m1 >= 1 && m1 <= 12)
		{
			if ((d1 >= 1 && d1 <= 31) && (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12))
			{
			}
			else
				if ((d1 >= 1 && d1 <= 30) && (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11))
				{
				}
				else
					if ((d1 >= 1 && d1 <= 28) && (m1 == 2))
					{
					}
					else
						if (d1 == 29 && m1 == 2 && (y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0)))
						{
						}
						else
							return -1;
		}
		else
			return -1;
	}
	else
		return -1;
	//checking if year is false
	if (y2 >= 1 && y2 <= 9999)
	{
		if (m2 >= 1 && m2 <= 12)
		{
			if ((d2 >= 1 && d2 <= 31) && (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12))
			{
			}
			else
				if ((d2 >= 1 && d2 <= 30) && (m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11))
				{
				}
				else
					if ((d2 >= 1 && d2 <= 28) && (m2 == 2))
					{
					}
					else
						if (d2 == 29 && m2 == 2 && (y2 % 400 == 0 || (y2 % 4 == 0 && y2 % 100 != 0)))
						{
						}
						else
							return -1;
		}
		else
			return -1;
	}
	else
		return -1;


	//older year
	if (y1 < y2)
		return 1;
	if (y1 == y2)
	{
		if (m1 < m2)
			return 1;
		else if (m1 == m2)
		{
			if (d1 < d2)
				return 1;
			else if (d1 == d2)
				return 0;
			else return 2;
		}
		else
			return 2;
	}
	if (y2 < y1)
		return 2;
}