#include "main.h"
/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of element of an array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
