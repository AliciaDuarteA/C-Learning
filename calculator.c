#include <stdio.h>

int main(void)

{
	double num1;
	double num2;
	char operation;
	double result;

	printf("Enter 1st number: ");
	scanf("%lf", &num1);

	printf("Operator: ");
	scanf(" %c", &operation);

	printf("Enter 2nd number: ");
	scanf("%lf", &num2);

	if (operation == '+')
	{
		result = num1 + num2;
		printf ("Result: %g\n", result);
	}
	else if (operation == '-')
	{
		result = num1 - num2;
		printf("Results: %g\n", result);
	}
	else if (operation == '*')
	{
		result = num1 * num2;
		printf("Result: %g\n", result);
	}
	else if (operation == 'x')
	{
		result = num1 * num2;
		printf("Result: %g\n", result);
	}
	else if (operation == '/')
	{
		if(num2 == 0)
		{
			printf("Error: You cannot divide by 0.\n");
			return 1;
		}

		result = num1 / num2;
		printf("Result: %g\n", result);
	}
	else 
	{
		printf("Not a valid Operation.\n");
	}	

	return 0;
}
