#include<stdio.h>

int main() {
  int userInput, found = 0;
  printf("Enter a number: ");
  scanf("%d", &userInput);

  int array[] = {3, -3, 1, 5, 7, 0, 8, 9, 6};
  int sizeArray = sizeof(array)/sizeof(array[0]);
  
  for (int i = 0; i < sizeArray; i++) {
    if (userInput == array[i]) {
      found = 1;
      break;
    } 
  }

  if (found) {
    printf("The number %d exists in array.", userInput);
  } else {
    printf("The number %d doesn't exist in array.", userInput);
  }

  return 0;
}