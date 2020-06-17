#include "holberton.h"

/**
* print_alphabet - print alphabet function
*/

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		++x;
	}
	_putchar('\n');

}
