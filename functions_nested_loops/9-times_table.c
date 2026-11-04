#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int r = j * i;

			if (j == 0)
			{
				_putchar(r + '0');
			}
			else if (r < 10)
			{
				_putchar(' ');
				_putchar((r % 10) + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
