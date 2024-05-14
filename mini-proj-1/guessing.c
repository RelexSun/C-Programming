#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int input;
  srand(time(0));

  int answer = (rand() % 100) + 1;
  printf("%d", answer);

  do {
  printf("\nGuess number from 1 - 100: ");
  scanf("%d", &input);
  
    if (answer > input) {
    printf("\nToo Small");

  } else if (answer < input) {
    printf("\nToo Big");
  }
    else {
    printf("\nCorrect!!!!");
    break;
  }

  } while (answer != input );
  

  return 0;
}