#include <stdio.h>
#include <time.h>

int main()
{
	const int HIGH = 11; 	// Easy range edit for high
	const int LOW = 0;		// Easy range edit for low

	int guess, answer, keepGoing = 1;
	char userInput;

	printf("Guess a number between %d and %d", HIGH, LOW);
	//Prompts user for input

	srand(time(NULL));
	//Number generator
	answer = rand() % 10 + 1;

	while(keepGoing != 0)
	{
		//Accepts user input
		scanf("%d",guess);

		//incorrect print
		if(guess == answer)
			printf("\nYou are correct!\n\n");
		else
			printf("\nYou are incorrect.\n\n");

		//Ask if the user wants to try again
		printf("Would you like to try again?\n");
		printf("Y\\N:");

		//Space before modifier to skip leading white space
		//and first non-white character
		scanf(" %c",answer);
		
		if(userInput == 'n' || userInput == 'N')
			keepGoing = 0;

	}
	return 0; 	// ending return statement.
}
