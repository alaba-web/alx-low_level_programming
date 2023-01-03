#include <stdio.h>
#include "main.h"
/**
 * set_string - The function sets the value of a pointer to a character.
 * @s: double pointer to a string.
 * @to: a ponter to the string where s is to be set.
 * Return: Description of the return value.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
