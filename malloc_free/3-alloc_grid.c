#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: number of columns in the grid
 * @height: number of rows in the grid
 *
 * Return: pointer to the 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int *b, **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	while (i < height)
	{
		b = malloc(sizeof(int) * width);
		if (b == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(a[j]);
				j++;
			}
			free(a);
			return (NULL);
		}
		a[i] = b;
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
	return (a);
}
