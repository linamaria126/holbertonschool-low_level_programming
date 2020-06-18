#include <stdio.h>


/**
 * main - main function
 * Return: Return 0
 */
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}

