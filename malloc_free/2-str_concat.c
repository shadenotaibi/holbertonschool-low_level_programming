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
	char *a;
	unsigned int i = 0;
	int counts1 = 0;
	int counts2 = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		counts1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		counts2++;
		i++;
	}
	a = malloc(sizeof(char) * ((counts1) + (counts2) + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		a[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		a[j] = s2[i];
		i++;
		j++;
	}
	a[j] = '\0';
	return (a);
}
