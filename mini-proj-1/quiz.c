#include<stdio.h>
#include<ctype.h>

int main() {

  char questions[][100] = {
    "1. What's my name?",
    "2. What's my age?",
    "3. Do you love me?"
  };

  char options[][100] = {
    "A. Haha",
    "B. Sun",
    "C. Hehe",
    "D. LOL",

    "A. 20",
    "B. 21",
    "C. 25",
    "D. 32",

    "A. No",
    "B. Yes",
    "C. haha",
    "D. siuuu",
  };

  char answers[3] = {'B', 'A', 'B'};// use '' instead of "" cuz its a char not string

  int size = sizeof(questions)/sizeof(questions[0]);

  char guess;
  int score = 0;

  for (int i = 0; i < size; i++) {
    printf("\n");
    printf("%s\n", questions[i]);
    printf("\n");

    // print 4 options at a time based on i
    for (int j = (i * 4); j < (i * 4) + 4; j++) {
      printf("%s\n", options[j]);
    }

    printf("Enter your answer: ");
    scanf(" %c", &guess);
    // scanf("%c"); // clear \n from input buffer

    guess = toupper(guess);

    if (guess == answers[i]) {
      printf("CORRECT!!!🔥🎉\n");
      score++;
    } else {
      printf("Khos hz bro🔴\n");
    }
  }

  printf("FINAL SCORE: %d/%d", score, size);

  return 0;
}