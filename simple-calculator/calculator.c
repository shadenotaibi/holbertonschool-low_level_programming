#include <stdio.h>

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int num1;
	int num2;
	int result;

	printf("Simple Calculator \n1) add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");

	if (scanf("%d", &choice) != 1)
	{
		printf("Error: invalid input\n");
		return (1);
	}

	if (scanf("%d \n %d",&num1 , &num2))
	{
		return (2);
		printf("the result is : %d", result);
	}

	if (choice == 0)
	{
		printf("bye!");
		return (0);
	}

	if (choice < 0 || choice > 4)
	{
		printf("Error: invalid input\n");
		return (1);
	}
	else
	{
		printf("choice: %d \n",choice);
	}
	return (0);
}
