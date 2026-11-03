#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
