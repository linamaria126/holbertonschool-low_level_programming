#include <stdio.h>

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
* print_array - prints n elements of an array of integers
* @a: Array
* @n: number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
	
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		i++;

		if (i != n)
		{
			printf(", ");
		}

	}

	putchar('\n');
}
