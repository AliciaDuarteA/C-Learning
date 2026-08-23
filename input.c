#include <stdio.h>

int main(void)
{
	int age;
	int favoriteNumber;
	char favoriteSubject[50];
	char favoriteColor[50];


	printf("How old is Sebastian? ");
	scanf("%d", &age);
	
	printf("Sebastian is %d years old.\n", age);	


	printf("What is Sebastian's favorite number? ");
	scanf("%d", &favoriteNumber);

	printf("Sebastian's favorite number is %d.\n", favoriteNumber);
	

	printf("What is Sebastian's favorite Subject? ");
	scanf("%49s", &favoriteSubject);

	printf("Sebastian's favorite Subject is %s.\n", favoriteSubject);	

	
	printf("What is Sebastian's favorite color? ");
	scanf("%49s", &favoriteColor);

	printf("Sebastian's favorite color is %s.\n");

	return 0;
}
