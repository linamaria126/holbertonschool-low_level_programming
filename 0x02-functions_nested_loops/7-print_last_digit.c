#include "holberton.h"

/**
* print_last_digit - print last digit
* @n: Integer
* Return: return last digit
*/

int print_last_digit(int n)
{

	int l = 0;

	if (n < 0)
	{
		n = -n;
	}

	l = n % 10;

	_putchar ('0' + l);

	return (l);
}
