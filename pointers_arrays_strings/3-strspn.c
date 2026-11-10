#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 */
 unsigned int _strspn(char *s, char *accept)
 {
	int i = 0;
	int j;
	unsigned int count = 0;
	int found;

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
