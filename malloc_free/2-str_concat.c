#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *a, *p;
	unsigned int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = s1;
	while (*p++)
		len++;

	p = s2;
	while (*p++)
		len++;

	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);

	p = a;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';

	return (a);
}
