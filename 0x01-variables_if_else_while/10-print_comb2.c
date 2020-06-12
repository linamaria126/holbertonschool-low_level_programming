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
	int y;

	x = 48;
	y = 48;

	while (x <= 57)
	{
		while (y <= 57)
		{
			putchar(x);
			putchar(y);

			if (x != 57 || y != 57)
			{
				putchar(',');
				putchar(' ');
			}
			++y;
		}
		++x;
		y = 48;
	}

	putchar('\n');

	return (0);
}

