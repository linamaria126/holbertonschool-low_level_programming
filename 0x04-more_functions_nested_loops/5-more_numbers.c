#include "holberton.h"

/**
* more_numbers - prints 10 times the numbers,
* from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar ('0' + j);
			}
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}

}
