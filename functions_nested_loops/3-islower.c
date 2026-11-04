#include "main.h"

/**
 * _islower - check if the letter is lowercase or not
 *
 * Return: void
 */
 int _islower(int c)
 {
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
 }
 