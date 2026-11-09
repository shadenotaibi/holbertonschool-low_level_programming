#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (sign == 1)
		{
			if (result > (INT_MAX - digit) / 10)
				return (INT_MAX);
			result = result * 10 + digit;
		}
		else
		{
			if (result < (INT_MIN + digit) / 10)
				return (INT_MIN);
			result = result * 10 - digit;
		}
		i++;
	}
	return (result);
}
