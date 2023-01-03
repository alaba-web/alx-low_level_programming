#include <stdio.h>
#include "main.h"
/**
 * _strstr - This function locates a sub-string.
 * @haystack: an input string that is searched in
 * @needle: an input string to locate into haystack string
 * Return: a pointer to the beginning of the located sub-string
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
