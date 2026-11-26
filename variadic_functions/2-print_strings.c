#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings separated by a separator
 * @separator: the string printed between strings
 * @n: the number of strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list a;
	char *st;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(a, char *);
		if (st == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
