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

	x = 0;

	while (x <= 9)
	{
		printf("%i", x);
		++x;
	}

	putchar('\n');

	return (0);
}

