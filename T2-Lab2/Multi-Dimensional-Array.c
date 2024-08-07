#include<stdio.h>

void input ( int size, int array[size], int numArray) {
  for (int i = 0; i < size; i++ ) {
    printf("Enter elements of array %d : ", numArray);
    scanf("%d", &array[i]);
  }
  printf("\nNow for another array\n");
}

void sumArrays (int size, int array1[size], int array2[size], int result[size]) {
  for (int i = 0; i < size; i++) {
    result[i] = array1[i] + array2[i];
  }
}

void subArrays (int size, int array1[size], int array2[size], int result[size]) {
  for (int i = 0; i < size; i++) {
    result[i] = array1[i] - array2[i];
  }
}

void resultArray (int size, int result[size]) {
    for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", result[i]);
    } else {
      printf("%d, ", result[i]);
    }
  }
}

int main() {
  int sizeArray1, sizeArray2, size;

  while(1) {
    printf("Enter numbers of element array 1: ");
    scanf("%d", &sizeArray1);
    printf("Enter numbers of element array 2: ");
    scanf("%d", &sizeArray2);

    if (sizeArray2 == sizeArray1) {
      size = sizeArray1;
      break;
    }
  }

  int array1[size], array2[size], sumResult[size], subResult[size];

  input(size, array1, 1);
  input(size, array2, 2);

  sumArrays(size, array1, array2, sumResult);
  subArrays(size, array1, array2, subResult);

  printf("The result of sum is: {");
  resultArray(size, sumResult);
  printf("}");

  printf("\nThe result of sub is: {");
  resultArray(size, subResult);
  printf("}");


  return 0;
}