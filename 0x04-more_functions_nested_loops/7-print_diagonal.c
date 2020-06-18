#include "holberton.h"

/**
* print_spaces - print n-1 spaces
* @n: number of spaces to print
*/
void print_spaces(int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		_putchar(' ');
	}
}


/**
* print_diagonal - prints a diagonal
* @n: number of times the char \ will printed.
*/

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		print_spaces(i);
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n < 0)
	{
		_putchar('\n');
	}

}
