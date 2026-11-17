#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int count;
	int *a;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	count = max - min + 1;
	a = malloc(sizeof(int) * count);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < count)
	{
		a[i] = i + min;
		i++;
	}
	return (a);
}
