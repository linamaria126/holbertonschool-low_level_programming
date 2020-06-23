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
* puts2 - Prints every other character of a string
* @str: string
*/
void puts2(char *str)
{

	int i = 0;
	int l = _strlen(str);

	while (i < l)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}

	_putchar('\n');
}
