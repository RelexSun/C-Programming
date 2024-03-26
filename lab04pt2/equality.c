#include <stdio.h>


int main() {
  int num1, num2;
  printf("Enter integer: ");
  scanf("%d%d", &num1, &num2);

  if (num1 == num2) {
    printf("%d is equal to %d", num1, num2);
  } else {
    printf("%d is NOT equal to %d", num1, num2);
  }

  return 0;
}
