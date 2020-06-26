#include "holberton.h"

/**
* reverse_array: Reverse a array of int
* @a: array of int
* @n: size of array
*/
void reverse_array(int *a, int n)
{

	int i = 0;

	int t;

	n--;

	while (i < n)
	{
		t = a[n];

		a[n] = a[i];
		a[i] = t;
		i++;
		n--;
	}
}
