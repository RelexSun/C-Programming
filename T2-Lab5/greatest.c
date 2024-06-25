#include<stdio.h>

int greatest(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

int main() {
  int a, b;
  printf("Enter the 2 integer: ");
  scanf("%d %d", &a, &b);
  // int result = greatest(a, b);
  // printf("The greatest number between %d and %d is %d ", a, b, result);
  printf("The greatest number between %d and %d is %d ", a, b, greatest(a, b));

  return 0;
}