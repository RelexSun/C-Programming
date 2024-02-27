#include<stdio.h>

int main() {
  // Basic Printing
  printf("Hello,\n I am learning C programming\n");
  int c = 2 + 3;
  printf("2 + 3 =\n %d\n", c);

  // Formatting Output
  printf("\nName:\t Sun\n Age:\t 20\n");

  // challenge 

  for (int i = 1; i <= 5; i++) {
    for (int j = 5; j > i; j--) {
      printf(" ");
    };

  for (int k = 1; k <= i; k++) {
    printf("%d", i);
  };

    printf("\n");
  };

  // printf("\n     1\n    22\n   333\n  4444\n 55555\n");
return 0;
}