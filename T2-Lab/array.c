#include<stdio.h>

int main() {
  int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

  int sizeOfArray = sizeof(array)/sizeof(array[0]);

  for (int i = 0; i < sizeOfArray; i ++) {
    printf("%d\n", array[i]);
  }

  return 0;
}