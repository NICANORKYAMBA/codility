#include "BinaryGap.h"

/**
 * solution - function that given a positive integer N,
 * returns the length of the longest binary gap
 *
 * @N: integer
 *
 * Return: length of the longest binary gap
 */

int solution(int N)
{
	int i = 0;
	int j = -1;

	if (N < 0)
		return (0);

	while (N > 0)
	{
		if (N & 1)
		{
			if (j >= 0 && j > i)
			{
				i = j;
			}
			j = 0;
		}
		else
		{
			if (j >= 0)
			{
				j++;
			}
		}
		N >>= 1;
	}
	if (j > i)
	{
		i = j;
	}

	return (i);
}
