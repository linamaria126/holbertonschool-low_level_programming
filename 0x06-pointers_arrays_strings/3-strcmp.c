#include "holberton.h"

/**
 * _strcmp - Compare strings
 * @s1: string 1
 * @s2: number of bytes
 * Return: Return a pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
	int d = 0;
	int i = 0;

	while (s1[i] || s2[i])
	{
		d = s1[i] - s2[i];

		if (d != 0)
		{
			return (d);
		}
		i++;
	}

	return (0);
}
