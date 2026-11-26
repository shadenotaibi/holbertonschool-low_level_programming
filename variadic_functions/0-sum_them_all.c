#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments
 *
 * Return: the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list a;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(a, int);
	}
	va_end(a);
	return (result);
}
