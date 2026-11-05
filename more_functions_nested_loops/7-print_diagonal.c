#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print the character \
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x = 0;
	int y;

	while (x < n)
	{
		y = 0;
		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
}
