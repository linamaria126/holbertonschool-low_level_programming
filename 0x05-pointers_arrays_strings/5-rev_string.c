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
* rev_string - reverse a string
* @s: string
*/
void rev_string(char *s)
{

	int i = 0;
	int l = _strlen(s) - 1;
	char t;

	while (i < l)
	{
		t = s[l];

		*&s[l] = s[i];
		*&s[i] = t;
		i++;
		l--;
	}


}
