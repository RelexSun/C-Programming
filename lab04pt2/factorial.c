#include <stdio.h>

int main() {
  int num, fact = 1;
  printf("Enter number to calculate: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    fact *= i;

  }
    printf("%d! = %d", num, fact );


  return 0;
}