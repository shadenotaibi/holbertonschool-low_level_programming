
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: maximum number of bytes to take from s2
 *
 * Return: pointer to the newly allocated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int len1, len2;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n < len2)
		len2 = n;

	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == NULL)
		return (NULL);

	while (i < len1)
	{
		a[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		a[i + j] = s2[j];
		j++;
	}
	a[i + j] = '\0';

	return (a);
}
