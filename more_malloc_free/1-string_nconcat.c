#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: maximum number of bytes to take from s2
 *
 * Return: pointer to the newly allocated concatenated string,
 * or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int count = 0;
	unsigned int count2 = 0;
	char *a;

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
	count++;
	i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		count2++;
		i++;
	}
	if (n < count2)
	{
		count = count + n;
	}
	else
	{
		count = count + count2;
	}
	a = malloc(sizeof(char) * (count + 1));
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
	while (s2[i] != '\0' && i < n)
	{
		a[j] = s2[i];
		i++;
		j++;
	}
	a[j] = '\0';
	return (a);
}
