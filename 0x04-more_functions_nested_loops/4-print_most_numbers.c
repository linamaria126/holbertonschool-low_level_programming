#include "holberton.h"

/**
* print_most_numbers - print number from 0 to 9 using _putchar,
* don't print 2 and 4
*/

void print_most_numbers(void)
{

	for (int i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar (i);
		}
	}

	_putchar ('\n');
}
