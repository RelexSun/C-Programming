#include<stdio.h>

int sum(int n) {
  int result = 0;
  for (int i = 0; i <= n; i++) {
    result += i;
  }
  return result;
}

int main() {
  while (1) {
    int n;
    printf("Enter 3 integer: ");
    scanf("%d", &n);
    if (n > 0) {
      printf("The sum is %d ", sum(n));
      break;
    }
    printf("n should be positive\n");
  }

  // int result = sum(n);
  // printf("The sum is %d", result);

  return 0;
}