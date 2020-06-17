#include "holberton.h"

/**
* print_sign - print sign of a number
* @n: Description of parameter n
* Return: return 1, return 0 and return -1
*/

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}

}



/**
 * _abs - print the absolute value
 * @n: Description of parameter n
 * Return: return abs
 */

int _abs(int n)
{
	if (print_sign(n) == -1)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}



/**
* print_last_digit - print last digit
* @n: Integer
* Return: return last digit
*/

int print_last_digit(int n)
{
	int l = _abs(n) % 10;

	_putchar ('0' + l);

	return (l);
}
