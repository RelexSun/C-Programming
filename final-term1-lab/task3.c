#include<stdio.h>

void inputMatrix (int row, int col, int matrix[row][col], char name[]) {
  printf("Enter the value of each element in matrix %s: \n", name);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
};

void resultMatrix (int row, int col, int result[row][col], char operation[]) {
    printf("This is the result of %s\n", operation);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
};

void multiplyMatrix (int row1, int col1, int row2, int col2, int matrix1[row1][col1], int matrix2[row2][col2], int result[row1][col2]) {

  // give matrix name result an initial value = 0 cuz it need to be a vessal to hold values
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col2; j++) {
        for (int k = 0; k < col1; k++) {
          result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
  }
};

int main() {
  int row1, col1, row2, col2;
  printf("Enter row and columns of the 1st matrix: ");
  scanf("%d %d", &row1, &col1);
  printf("Enter row and columns of the 2nd matrix: ");
  scanf("%d %d", &row2, &col2); 

  if (col1 != row2) {
    printf("Matrices cannot be multiplied\n");
    return 1;
  }

  int matrix1[row1][col1];
  int matrix2[row2][col2];
  int result[row1][col2];
  
  inputMatrix(row1, col1, matrix1, "1");
  inputMatrix(row2, col2, matrix2, "2");

  multiplyMatrix(row1, col1, row2, col2, matrix1, matrix2, result);

  resultMatrix(row1, col2, result, "multiplication");

  return 0;
}