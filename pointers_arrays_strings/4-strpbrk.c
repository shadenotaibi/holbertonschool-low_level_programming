#include "main.h"

/**
 * _strpbrk - searches a string for any byte in accept
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return {NULL};
}
