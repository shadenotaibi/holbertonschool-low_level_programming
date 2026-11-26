
#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_separator - prints separator between values
 * @printed: pointer to the number of printed values
 *
 * Return: Nothing
 */
static void print_separator(int *printed)
{
	if (*printed > 0)
		printf(", ");

	(*printed)++;
}

/**
 * print_all - prints values based on their format
 * @format: string specifying the types of values
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int printed = 0;
	char *current;
	va_list a;

	va_start(a, format);
	if (format == NULL)
	{
    	va_end(a);
    	printf("\n");
    	return;
	}

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				print_separator(&printed);
				printf("%c", va_arg(a, int));
				break;

			case 'i':
				print_separator(&printed);
				printf("%d", va_arg(a, int));
				break;

			case 'f':
				print_separator(&printed);
				printf("%f", va_arg(a, double));
				break;

			case 's':
				current = va_arg(a, char *);
				if (current == NULL)
					current = "(nil)";

				print_separator(&printed);
				printf("%s", current);
				break;

			default:
				break;
		}

		i++;
	}

	va_end(a);
	printf("\n");
}
