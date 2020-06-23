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
* print_rev - Prints a string in reverse
* @s: string
*/
void print_rev(char *s)
{

	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}

	_putchar('\n');

}
