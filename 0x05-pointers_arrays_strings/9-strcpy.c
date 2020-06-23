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
* _strcpy - copy to dest the string src
* @dest: destiny
* @src: source
* Return: destiny
*/
char *_strcpy(char *dest, char *src)
{

	int i = 0;
	int l = _strlen(src);
	

	while (i < l)
	{
		*&dest[i] = src[i];
		i++;
	}

	return(dest);

}
