#include "holberton.h"

/**
* _puts - Prints a string
* @str: string
*/
void _puts(char *str)
{

	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}

	_putchar('\n');

}
