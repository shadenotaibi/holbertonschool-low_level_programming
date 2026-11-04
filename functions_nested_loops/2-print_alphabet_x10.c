#include "main.h"

/**
 * print_alphabet - prints the alphabet 10 times in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char l = 'a';
    int x = 1;
    while(x <= 10)
    {
    	while (l <= 'z')
    	{
	    	_putchar(l);
	    	l++;
	    }
        x++;
    }
	_putchar('\n');
}