#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */

 void print_alphabet(void)
 {
    char l = 'a';
    while (l<= 'z')
    {
        _putchar(l);
        l++;
    }
    _putchar('\n');
 }