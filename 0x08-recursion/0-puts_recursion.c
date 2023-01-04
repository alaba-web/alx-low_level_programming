#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - This function prints a string, followed by a new line.
 * @s: a input string to printing.
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
