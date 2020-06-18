#include "holberton.h"

/**
* table - print table
* @t: integer
*/
void table(int t)
{
	int m, r;

	for (m = 0; m <= 9; m++)
	{
		r = t * m;
		if (m != 0)
		{
			if (r > 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
		}

		if (r > 9)
		{
			_putchar ('0' + r / 10);
			_putchar ('0' + r % 10);
		}
		else
		{
			_putchar ('0' + r);
		}

		if (m != 9)
		{
			_putchar(',');
		}

	}

}

/**
* times_table - print tables to 0 at 9
*/

void times_table(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		table(t);
		_putchar ('\n');
	}


}
