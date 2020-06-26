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
 * _strcat - concatenates tow strings
 * @dest: Destiny string
 * @src: Source string
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int l = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l++;
	}

	dest[l] = '\0';

	return (dest);
}
