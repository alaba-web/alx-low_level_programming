#include "main.h"
/**
 * _strlen - a fuction that return the length of a string.
 * @s: An input of a string.
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
