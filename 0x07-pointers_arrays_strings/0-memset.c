#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills the memory with constant bytes
 * @s: The location that is to be filled.
 * @b: char that will be filled in the location
 * @n: unsigned int to be filled.
 * Return: returns pointer to location filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
