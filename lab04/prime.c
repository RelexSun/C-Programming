#include<stdio.h>

void isPrime (int num);

int main() {
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

if (num == 1 || num == 2) {
  printf("%d is a prime number", num);
} else {
  isPrime(num);
}

  return 0;
}

void isPrime(int num) {
  int isPrime = 1;

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = 0;
      break;
    } 
  }

if (isPrime) {
  printf("%d is a PRIME number", num);
} else {
  printf("%d is NOT a prime number", num);
}

}