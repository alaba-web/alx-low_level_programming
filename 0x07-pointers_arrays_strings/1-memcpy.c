#include <stdio.h>
#include "main.h"
/**
 * _memcpy - This function copys the memory area
 * @dest: memory area where address is copied.
 * @src: memory area source is copied from.
 * @n: unsigned int of bytes.
 * Return: returns pointer to copied location.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
