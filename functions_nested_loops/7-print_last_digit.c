#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int y = n % 10;

	if (y < 0)
	{
		y = -y;
	}
	_putchar(y + '0');
	return (y);
}