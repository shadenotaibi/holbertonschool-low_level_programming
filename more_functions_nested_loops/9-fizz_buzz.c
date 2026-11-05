#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 *
 * Return: void
 */
int main(void)
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			if (num > 9)
			{
    		_putchar(num / 10 + '0');
    		_putchar(num % 10 + '0');
			}
			else
			{
			_putchar(num + '0');
			}
		}
		_putchar(' ');
		num++;
	}
	_putchar('\n');
	return (0);
}
