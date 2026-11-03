#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 15)
	{
		if (n <= 9)
		{
			putchar(n + '0');
		}
		else if (n > 9)
		{
			putchar(n - 10 + 'a');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
