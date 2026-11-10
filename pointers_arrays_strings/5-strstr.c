#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any byte in accept
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: pointer to the first matching byte, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
