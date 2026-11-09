#include "main.h"

/**
 * _strncpy - copies a string up to n characters
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
	return (dest);
}
