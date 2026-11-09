#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array of integers
 * @n: the number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int x;
	int j = n - 1;

	while (i < j)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
		i++;
		j--;
	}
}
