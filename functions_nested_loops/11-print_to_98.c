#include "main.h"

/**
 * print_to_98 - prints all integers from n to 98
 * @n: the number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int num;
	int divisor;
	int step;

	if (n <= 98)
	{
		step = 1;
	}
	else
	{
		step = -1;
	}

	while (1)
	{
		num = n;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		divisor = 1;
		while (num / divisor >= 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			_putchar((num / divisor) % 10 + '0');
			divisor /= 10;
		}

		if (n == 98)
		{
			break;
		}

		_putchar(',');
		_putchar(' ');
		n += step;
	}

	_putchar('\n');
}
