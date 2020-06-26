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
 * _strncat - concatenates two strings using n bytes
 * @dest: Destiny string
 * @src: Source string
 * @n: Number of bytes to copy
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = _strlen(dest);
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l++;
	}

	if (n > 0)
	{
		dest[l] = '\0';
	}

	return (dest);
}
