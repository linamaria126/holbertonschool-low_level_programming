#include "holberton.h"

/**
* _isalpha - check letter, lowecase or uppercase
* @c: Description of parameter c
* Return: return 0 to letter, return 1 to otherwise
*/

int _isalpha(int c)
{

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
