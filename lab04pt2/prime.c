#include <stdio.h>

void isPrime(int num);

int main() {

  for (int i = 3; i <= 45; i++) {
    isPrime(i);
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
    printf("%d is PRIME\n", num);
  } else {
    printf("%d is NOT PRIME\n", num);
  }

}