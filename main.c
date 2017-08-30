#include <stdio.h>
#include <time.h>


int main()
{
  const int HIGH = 11; 		// Easy range edit for high
  const int LOW = 0;		// Easy range edit for low
  int game = 1;
  int correct = 0;
  int cont = 1;
  int guess = 0;
  int answer = 0;

	printf("Guess a number between %d and %d\n", HIGH, LOW);
	//Prompts user for input

	answer = srand(time(NULL));
	//Number generator

	do {
		printf("Your guess: ");
		scanf("d%", guess);
		printf("\n");

		if (answer == guess)
		{
			correct = 1;
			printf("You guessed right!\n");
		}
		else
		{
			correct = 0;
			printf("You guessed wrong. Try again? Y/N \n");
			scanf("%d",cont);
			printf("\n");
		}

	} while (cont == 1);
	//guessing

}
