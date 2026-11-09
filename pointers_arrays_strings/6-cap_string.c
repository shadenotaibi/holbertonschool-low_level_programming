#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else
		{
			if (capitalize == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
