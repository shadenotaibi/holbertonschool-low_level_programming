#include <stdio.h>

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = 1;

	while (choice != 0){

		printf("Simple Calculator \n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");

		if (scanf("%d", &choice) != 1)
		{
			printf("Error: invalid input\n");
			return (1);
		}
		if (choice == 0)
		{
			break;
		}
		if (choice < 1 || choice > 4)
		{
		printf("Invalid choice\n");
		
		}
			else
		{
			printf("choice: %d \n",choice);
		}
	}

	printf("Bye!");
	return (0);
}
