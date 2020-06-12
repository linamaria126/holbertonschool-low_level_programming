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

	while (x <= 57)
	{
		putchar(x);

		if (x != 57)
		{
			putchar(' ');
			putchar(',');
		}

		++x;
	}

	putchar('\n');

	return (0);
}

