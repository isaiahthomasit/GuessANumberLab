#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
  char userName[20];
  char response[20];
  int guess;
  int keepGoing = true;
  int turns;

  srand(time(NULL));

  int correct = (rand() % 100) + 1;

  printf("What is your name? ");
  scanf("%s", userName); 

  printf("\nHello, %s!, My name is Isaiah!\n", userName);
  printf("Would you like to play Guess The Number? ");
  scanf("%s", response);

  printf("\nI'm thinking of a number between 1-100.\n");
   
  while (keepGoing){
    turns++;
    printf("Turn %d) Guess a number: ", turns);
    scanf("%d", &guess);

    if (guess < correct){
      printf("Higher!\n");
    } else if (guess > correct){
      printf("Lower!\n");
    } else {
      printf("\nCorrect!\n");
      keepGoing = false;
    }
	 
  } // end while loop

  if (turns < 7){
    printf("You got it in %d tries! Very good!\n", turns);
  } else {
    printf("It took you %d tries. You're garbage bro!\n", turns);
  }

  return 0;

} // end main


