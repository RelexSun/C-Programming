#include<stdio.h>

int sum(int a, int b, int c) {
  return a + b + b;
}

int main() {
  int a, b, c;
  printf("Enter 3 integer: ");
  scanf("%d %d %d", &a, &b, &c);
  // int result = sum(a, b, c);
  // printf("The sum of 3 integer is %d", result);
  printf("The sum of 3 integer is %d", sum(a, b, c));

  return 0;
}