#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l= 'a';
	char a= 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (a <= 'Z')
        {
                putchar(a);
                a++;
        }
	putchar('\n');
	return (0);
}
