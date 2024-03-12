#include<stdio.h>

int main() {
  // switch case
  char operator;
  int x, y;

  printf("Enter operation and integers: ");
  scanf("%d %c %d", &x, &operator, &y);

switch (operator) {
  case '+' :
    printf("%d + %d = %d", x, y, x + y);
    break;

  case '-' :
    printf("%d - %d = %d", x, y, x - y);
    break;

  case '*' :
    printf("%d * %d = %d", x, y, x * y);
    break;

  case '/' :
    printf("%d / %d = %d", x, y, x / y);
    break;

  default :
      printf("error");
}

  return 0;
}