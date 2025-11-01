#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void) {
  int random_number, guess, count = 0;
  bool won = false;
  srand(time(0));
  random_number = rand() % 10 + 1;
  printf("Guess a number between 1 and 10\n");

  while (count < 5) {
    printf("You have %d guess(es) left\n", 5 - count);
    scanf("%d", &guess);
    if (guess == random_number) {
      printf("You got it right!\n");
      won = true;
      break;
    } else {
      printf("Wrong! Guess again\n");
    }
    ++count; 
  }

  if (!won) {
    printf("Out of guesses, you lose!\n");
  }

  return 0;
}
