#include <stdio.h>

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = 1;
	int num1;
	int num2;
	int result;
	int i;

	while (choice != 0){

		printf("Simple Calculator \n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");

		if (scanf("%d", &choice) != 1)
		{
			printf("Error: invalid input\n");
			i = getchar();
			while (i != '\n' && i != EOF)
			{
				i = getchar();
			}
			continue;
		}
		if (choice == 0)
		{
			break;
		}
		if (choice < 1 || choice > 4)
		{
		printf("Invalid choice\n");
		
		}
		else if (choice == 1)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			result = num1 + num2;
			printf("Result: %d", result);
		}
		else if (choice == 2)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			result = num1 - num2;
			printf("Result: %d", result);
		}
		else if (choice == 3)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			result = num1 * num2;
			printf("Result: %d", result);
		}
		else if (choice == 4)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			if (num2 == 0)
			{
				printf("Error: division by zero\n");
			}
			else 
			{
			result = num1 / num2;
			printf("Result: %d", result);
			}
		}
	}

	printf("Bye!");
	return (0);
}
