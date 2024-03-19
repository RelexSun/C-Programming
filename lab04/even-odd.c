#include<stdio.h>

void Checker(int num); // function prototype

int main() {
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

  Checker(num);

  return 0;
}

// function declaration
void Checker(int num) {
  if (num % 2 == 0) {
    printf("%d is an even number", num);
  } else {
    printf("%d is an odd number", num);
  }
}