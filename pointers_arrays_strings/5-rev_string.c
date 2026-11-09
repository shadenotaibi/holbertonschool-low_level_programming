#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int x;
	int start = 0;
	int end;

	while (s[i] != '\0')
	{
		i++;
	}

	end = i - 1;

	while (start < end)
	{
		x = s[start];
		s[start] = s[end];
		s[end] = x;

		start++;
		end--;
	}
}
