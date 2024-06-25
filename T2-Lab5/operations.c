#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int n) {
  if (n <= 0) return 1;
  return n * factorial(n - 1);

}

int sum(int n) {
  int result = 0;
  for (int i = 0; i <= n; i++) {
    result += i;
  }
  return result;
}

float sqrtFunc(float n) {
  return sqrt(n);
}

void prime(int n) {
  int found = 0;
  if (n == 1) found = 1;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) found = 1; 
  }

  if (found) {
    printf("%d is not Prime\n", n);
  } else {
    printf("%d is Prime\n", n);
  }

}

int main () {
  int choice, n;
  float x;
  while (1) {
    printf("Operations\n");
    printf("1. Factorial\n");
    printf("2. Sumtation\n");
    printf("3. Square Root\n");
    printf("4. Prime number\n");
    printf("5. Exit\n");
    printf("Input choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        system("clear");
        printf("Input an integer to calculate factorial: ");
        scanf("%d", &n);
        printf("The result of factorial is %d\n", factorial(n));
        break;
      case 2:
        system("clear");
        printf("Input an integer to calculate the sum: ");
        scanf("%d", &n);
        printf("The sum of %d is %d\n", n, sum(n));
        break;
      case 3:
        system("clear");
        printf("Input an integer to calculate square root: ");
        scanf("%f", &x);
        printf("The result of a aquare root is %.2f\n", sqrtFunc(x));
        break;
      case 4:
        system("clear");
        printf("Input an integer to find prime: ");
        scanf("%d", &n);
        prime(n);
        break;
      case 5:
        exit(0);
      default: printf("Invalid choice!!!\n");
    }
  }
  
  return 0;
}