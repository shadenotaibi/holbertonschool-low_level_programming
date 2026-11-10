#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
