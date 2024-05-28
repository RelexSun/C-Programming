#include<stdio.h>

int main() {
  int userInput;
  printf("How many names: ");
  scanf("%d", &userInput);

  char names[userInput][100];

  for (int i = 0; i < userInput; i++) {
    printf("Name %d: ", i + 1);
    scanf("%s", names[i]);
  }

printf("Those names are ");
  for (int i = 0; i < userInput; i++) {
    if (i == userInput - 1 ) { // add "and" to the last string
      printf("and %s.", names[i]);
    } else {
      printf("%s, ", names[i]);
    }
  }

  return 0;
}