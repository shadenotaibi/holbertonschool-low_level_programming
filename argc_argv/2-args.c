
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
