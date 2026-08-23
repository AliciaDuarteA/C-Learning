#include <stdio.h>

int main(void)
{
	char favoriteColor[50];
	char favoriteGame[50];
	
	printf("What is Sebastian's favorite color? ");

	fgets(favoriteColor, sizeof favoriteColor, stdin);

	printf("Sebastian's favorite color is %s", favoriteColor);


	printf("What is Sebastian's favorite game? ");

	fgets(favoriteGame, sizeof favoriteGame, stdin);

	printf("Sebastian's favorite game is %s", favoriteGame);

return 0;

}

