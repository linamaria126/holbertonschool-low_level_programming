#include "holberton.h"

/**
* print_square - prints a square
* @size: size of square
*/

void print_square(int size)
{
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if(size <= 0)
	{
		_putchar('\n');
	}

}
