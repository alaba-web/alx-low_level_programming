#include "main.h"
/**
 * swap_int - Swaps the value of two integers.
 * @a: the first value.
 * @b: the second value.
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
