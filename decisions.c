#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main(void)
{
	char input [100];
	char *end;
	long number;
	int age;

	printf("Enter an age: ");

	if (fgets(input, sizeof input, stdin) ==NULL)
	{
		printf("Hey!, That's not correct!!.\n");
		return 1;
	}
	
	errno = 0;
	number = strtoll(input, &end, 10);

	if (errno == ERANGE || number < INT_MIN || number > INT_MAX)
	{
		printf("That number is way too large to be a valid age.\n");
		return 1;
	}

	if (end == input)
	{
		printf("That is not a number.\n");
		return 1;
	}

	age = (int)number;

	if (age >105)
	{
		printf("You are a Ghost.\n");
	}
	else if (age >=25) 
	{
		printf("You are an adult. But if you are Sebastian you'll always be my baby!\n");
	}
	else if (age <0)
	{
		printf("You haven't been born yet!.\n");
	}
	else 
	{
		printf("You are a child.\n");
	}
	
	
 	return 0;
}
