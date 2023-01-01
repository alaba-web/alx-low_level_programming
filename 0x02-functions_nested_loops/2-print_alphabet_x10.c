#include "main.h"

/**
 * print_alphabet_x10 - The function
 * Description: A function that prints alphabets 10times in lowercase on a newline
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char b;
	int c;

	for (c = 0; b < 10; c++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
