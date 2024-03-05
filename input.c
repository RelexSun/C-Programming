#include <stdio.h>

int main() {
char name[20];
int age;

  // printf("Enter your name: ");
  // scanf("%s", &name);
  // printf("Enter your age: ");
  // scanf("%d", &age);

printf("Your name and your age: ");
scanf("%s%d", &name, &age);

  printf("Your name is %s and your age is %d ", name, age);

  return 0;
}