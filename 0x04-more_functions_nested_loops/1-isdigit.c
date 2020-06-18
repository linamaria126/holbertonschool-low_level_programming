#include "holberton.h"

/**
* _isdigit - Function that checks for digit character.
* @c: input to evaluate
* Return: Return 1 if c is digit and 0 otherwise
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
