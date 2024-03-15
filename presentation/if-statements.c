#include<stdio.h>

int main() {
// if-else example
  int x;

  printf("Enter the integer: ");
  scanf("%d", &x);

  if (x >= 0) {
    printf("POSITIVE");
  } else {
  printf("NEGATIVE");
  }

  return 0;
}