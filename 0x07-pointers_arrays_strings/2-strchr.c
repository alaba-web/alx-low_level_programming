#include <stdio.h>
#include "main.h"
/**
 * _strchr - This function locates a character in a string.
 * @s: an input string which is searched.
 * @c: an input character to locate string s into.
 * Return: returns pointer to c position.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
