#include<stdio.h>

int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("User is eligible to vote");
  } else {
    printf("User is not yet old enough to vote");
  }

  return 0;
}