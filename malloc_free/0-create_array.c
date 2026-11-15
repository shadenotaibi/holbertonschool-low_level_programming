#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: number of elements in the array
 * @c: character used to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL) 
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
