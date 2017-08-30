#include <stdio.h>
#include <time.h>


int main()
{
  const int HIGH = 11; 		// Easy range edit for high
  const int LOW = 0;		// Easy range edit for low
  int flag = 0;


  printf("Guess a number between %d and %d", HIGH, LOW);
	//Prompts user for input

	srand(time(NULL));
	//Number generator


//----------------------------DO WHILE RAND------------------------------------
  do{
    int answer = rand();
  }while(answer < LOW || answer >= HIGH);
  //Creates a proper distribution of random numbers
//----------------------------DO WHILE RAND------------------------------------



	do {
		printf("Test");
	} while (flag == 1)

}
