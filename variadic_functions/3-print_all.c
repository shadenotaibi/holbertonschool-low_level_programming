
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
 * print_value - prints a value according to its type
 * @a: pointer to the variadic argument list
 * @type: type of the value to print
 * @printed: pointer to the number of printed values
 *
 * Return: Nothing
 */
static void print_value(va_list *a, char type, int *printed)
{
	char *current;

	switch (type)
	{
		case 'c':
			print_separator(printed);
			printf("%c", va_arg(*a, int));
			break;

		case 'i':
			print_separator(printed);
			printf("%d", va_arg(*a, int));
			break;

		case 'f':
			print_separator(printed);
			printf("%f", va_arg(*a, double));
			break;

		case 's':
			current = va_arg(*a, char *);
			if (current == NULL)
				current = "(nil)";

			print_separator(printed);
			printf("%s", current);
			break;

		default:
			break;
	}
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
	va_list a;

	va_start(a, format);

	while (format != NULL && format[i] != '\0')
	{
		print_value(&a, format[i], &printed);
		i++;
	}

	va_end(a);
	printf("\n");
}
