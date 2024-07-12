#include<stdio.h>

void substractMatrix (int row, int col, int matrix1[row][col], int matrix2[row][col], int result[row][col]) {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        result[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }
};

void addMatrix (int row, int col, int matrix1[row][col], int matrix2[row][col], int result[row][col]) {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
};

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

int main() {
  int row, col;
  printf("Enter row and columns of the 2 matrix: ");
  scanf("%d %d", &row, &col);

  int matrix1[row][col];
  int matrix2[row][col];
  int result[row][col];

  inputMatrix(row, col, matrix1, "1");
  inputMatrix(row, col, matrix2, "2");

  substractMatrix(row, col, matrix1, matrix2, result);
  resultMatrix(row, col, result, "substraction");

  addMatrix(row, col, matrix1, matrix2, result);
  resultMatrix(row, col, result, "addition");

  return 0;
}