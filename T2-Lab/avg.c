#include<stdio.h>

int main() {
  int array[10], userInput;

  for (int i = 0; i < 10; i++) {
    printf("Enter score of %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  int length = sizeof(array)/sizeof(array[0]);
  int total = 0;
  for (int i = 0; i < length; i++) {
    total += array[i];
  }

  int avg = total / length;
  printf("The average is %d\n", avg);
  printf("The total is %d\n", total);
  printf("The length is %d\n", length);

  printf("The numbers that is bigger than average", avg);

  for (int i = 0; i < length; i++) {
    if (array[i] >= avg) {
      printf("%d ", array[i]);
    }
  }

  return 0;
}