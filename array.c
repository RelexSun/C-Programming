#include<stdio.h>
#include<string.h>

int main() {
  //TODO: array = is a data structure that can store many vlaues of the data type.
  double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};

  // printf("$%.2lf", prices[4]);

  //TODO: sizeof() func will return back the size of every element in the array in bytes
  int range = sizeof(prices)/sizeof(prices[0]); 

  for (int i = 0; i < range; i++) {
    printf("$%.2lf\n", prices[i]);
  }

  //TODO: 2D array = an array, where each element is an entire array useful if you need a matrix, grid, or table of data.
  /*int numbers[2][3] = {
                      {1, 2, 3}, 
                      {4, 5, 6}
                        };*/
  int numbers[2][3];

  numbers[0][0] = 1;
  numbers[0][1] = 2;
  numbers[0][2] = 3;
  numbers[1][0] = 4;
  numbers[1][1] = 5;
  numbers[1][2] = 6;

  int row = sizeof(numbers)/sizeof(numbers[0]);
  int col = sizeof(numbers[0])/sizeof(numbers[0][0]);
  printf("row: %d\n", row);
  printf("col: %d\n", col);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }

  //TODO: string can not be directly manipulate but can be copied using a function from library
  char cars[][10] = {"Mustang", "Corvette", "Camaro"};

  // cars[0] = "Tesla";

  strcpy(cars[0], "Tesla");
  for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
    printf("%s\n", cars[i]);
  }

//TODO: swapping variables
int x = 1;
int y = 2;
int temp;
temp = x;
x = y;
y = temp;

printf("x = %d\n", x);
printf("y = %d", y);

//TODO: use strcpy to swap value if the value is string;
char soda[15] = 'soda'; // always give it the same size
char wine[15] = 'wine';
char tempChar[15];

strcpy(temp, x);
strcpy(x, y);
strcpy(y, temp);

  return 0;
}