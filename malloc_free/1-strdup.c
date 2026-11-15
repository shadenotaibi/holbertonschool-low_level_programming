#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *a;
    unsigned int i = 0;
    int count = 0;
    int j = 0;

    if (str == NULL)
    {
        return(NULL);
    }
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    a = malloc(sizeof(char) * (count + 1));
    if (a == NULL)
	{
		return (NULL);
	}
    i = 0;
    while (str[i] != '\0')
    {
        a[j] = str[i];
        i++;
        j++;
    }
    a[j] = '\0';
    return (a);
}
