#include "holberton.h"

/**
* print_numbers - print number from 0 to 9 using _putchar
*/

void print_numbers(void)
{

	for (int i = 0; i <= 9; i++)
	{
		_putchar ('0' + i);
	}

	_putchar ('\n');
}
