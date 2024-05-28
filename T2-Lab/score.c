#include<stdio.h>

int main() {
  int array[7], userInput;

  for (int i = 0; i < 7; i++) {
    printf("Enter score of %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  int length = sizeof(array)/sizeof(array[0]);
  int temp1 = array[0];
  int temp2 = array[0];
  for (int i = 0; i < length; i++) {
    if (temp1 < array[i]) {
      temp1 = array[i];
    }
  }

  for (int i = 0; i < length; i++) {
    if (temp2 > array[i]) {
      temp2 = array[i];
    }
  }

  printf("The largest score is %d\n", temp1);
  printf("The smallest score is %d", temp2);

  return 0;
}