#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (x < i)
	{
		_putchar(str[x]);
		x = x + 2;
	}

	_putchar('\n');
}
