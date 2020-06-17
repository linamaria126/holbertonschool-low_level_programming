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
/**
* print_alphabet_x10 - printx10
*
*/

void print_alphabet_x10(void)
{
	int y = 0;

	while (y <= 9)
	{
		print_alphabet();
		++y;
	}
}
