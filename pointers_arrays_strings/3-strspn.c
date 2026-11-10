#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to examine
 * @accept: the characters to match
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int found;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		found = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
		{
			break;
		}
		i++;
	}
	return (count);
}
