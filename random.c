#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  // TODO: psuedo random numbers = A set of values or elements that are statistically random (Not suit for any sort of encryption or cryptographic security)

  srand(time(0)); 

  int number1 = (rand() % 6) + 1; // random number in range 1 - 6
  int number2 = (rand() % 6) + 1;
  int number3 = (rand() % 6) + 1;

  return 0;
}