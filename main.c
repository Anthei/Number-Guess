#include <stdio.h>
#include <time.h>


int main()
{
  srand(time(NULL));		//initialize randomizer
  const int HIGH = 11; 		// Easy range edit for high
  const int LOW = 0;		// Easy range edit for low
  int correct = 0;			// if the guess is correct
  int cont = 1;				// if user wants to continue
  int guess = 0;			// user's guess
  int answer = 0;			// the answer

	printf("Guess a number between %d and %d\n", HIGH, LOW);
	//Prompts user for input
	
    answer = rand();
	//Number generator

	do {
		printf("Your guess: ");
		scanf("d%", guess);
		printf("\n");
		//get the user's answer

		if (answer == guess)
		{
			correct = 1;
			printf("You guessed right!\n");
		}
		else
		{
			correct = 0;
			printf("You guessed wrong. Try again? 1 = Yes / 0 = N \n");
			scanf("%d",cont);
			printf("\n");
		}
		//check the answer

	} while (cont == 1);
	//guessing

}
