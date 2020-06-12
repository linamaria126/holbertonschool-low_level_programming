#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main function
 * Return: Return 0
 */
int main(void)
{
	int x;

	x = 48;

	while (x <= 102)
	{
		if (x == 58)
		{
			x = 97;
		}

		putchar(x);
		++x;
	}

	putchar('\n');

	return (0);
}

