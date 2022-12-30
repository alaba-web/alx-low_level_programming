#include <stdio.h>
#include <unistd.h>
/**
 * main - check the description
 * Description: Prints the word Azeez in a new line.
 * Return: 0
 */
int main(void)
{
	char name[5] = "Azeez";
	
	int i;

	for (i = 0; i < 5; i++)
		_putchar(name[i]);
	_putchar('\n');

	return (0);
}
