#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
	{
		i++;
	}

	x = (i + 1) / 2;

	while (x < i)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
