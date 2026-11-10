#include "main.h"

/**
 * reset_to_98 - changes the value to 98
 * @n: pointer to the integer
 *
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
