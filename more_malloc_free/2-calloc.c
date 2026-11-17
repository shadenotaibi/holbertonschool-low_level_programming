#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	char *a;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
	{
		return(NULL);
	}
	total = nmemb * size;
	a = malloc(total);
	if (a == NULL)
	{
		return(NULL);
	}
	while (i < total)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
