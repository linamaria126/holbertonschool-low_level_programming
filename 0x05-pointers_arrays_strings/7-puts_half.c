#include "holberton.h"

/**
* _strlen - returns the length of a string
* @s: string
* Return: returns the length of a @s
*/
int _strlen(char *s)
{

	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
* puts_half - Prints half of a string, followed by a new line
* @str: string
*/
void puts_half(char *str)
{

	int n;
	int l = _strlen(str);

	if (l % 2)
	{
		n = (l - 1) / 2;
	}
	else
	{
		n = l / 2;
	}

	while (n < l)
	{
		_putchar(str[n]);

		n++;
	}

	_putchar('\n');
}
