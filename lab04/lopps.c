#include<stdio.h>

// function prototype
void sum(int count);

int main () {
  int count;
  printf("Enter a number: ");
  scanf("%d", &count);

  sum(count);
  return 0;
}

// function 
void sum (int count) {
  int sum = 0;
  for (int i = 1; i <= count; i++) {
    sum += i;
  }
  printf("%d", sum);
}