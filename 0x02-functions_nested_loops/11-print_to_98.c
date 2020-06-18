#include <stdio.h>


/**
* print_to_98 - print numbers from paramametar to 98
* @n: integer
*/

void print_to_98(int n)
{
	
	printf("%d",n);

	while(n != 98)
	{
		printf(", ");
		if (n>98)
		{
			n--;
		}
		else
		{
			n++;
		}

		printf("%d", n);

	}

	putchar('\n');
		
}
