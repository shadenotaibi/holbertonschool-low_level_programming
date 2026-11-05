#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (x < size)
	{
		int i = 0;
		int y = 0;

		while (i < size - x - 1)
		{
			_putchar(' ');
			i++;
		}

		while (y < x + 1)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		x++;
	}
}
