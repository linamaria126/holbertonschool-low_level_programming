#include "holberton.h"

/**
* _islower - check lowercase character function
* @c: Description of parameter c
* Return: return 0 to uppercase,return 1 to lowercase
*/

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
