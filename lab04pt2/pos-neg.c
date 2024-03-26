#include <stdio.h>

int main() {
  int num;
  printf("Enter number: ");
  scanf("%d", &num);

  if (num > 0) {
    printf("%d is POSITIVE", num);

  } else if (num < 0) {
    printf("%d is NEGATIVE", num);

  } else {
    printf("%d is ZERO", num);
  }

  return 0;
}