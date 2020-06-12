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

	x = 'a';

	while (x <= 'z')
	{
		if ((x != 'e') && (x != 'q'))
		{
			putchar(x);
		}
		++x;
	}

	putchar('\n');

	return (0);
}

