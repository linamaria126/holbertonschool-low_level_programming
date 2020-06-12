#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main function
 * Return: Return 0
 */
int main(void)
{
	char x;

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		--x;
	}

	putchar('\n');

	return (0);
}

