#include "holberton.h"

/**
* print_last_digit - print last digit
* @n: Integer
* Return: return last digit
*/

int print_last_digit(int n)
{

	int l;

	l = n % 10;

	if (l < 0)
	{
		l = -l;
	}


	_putchar ('0' + l);

	return (l);
}
