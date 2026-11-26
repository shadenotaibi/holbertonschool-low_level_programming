#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: the string printed between numbers
 * @n: the number of integers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	int num;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(a, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
