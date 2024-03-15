#include<stdio.h>

int main () {
  for (int i = 0; i <= 10; i++) {
    printf("%d\n", i);
  };

  int j = 1;
    
  while (j <= 5) {
    printf("%d\n", j);
    ++j;
  };

int x = 0;
do {
  printf("this is do while loop %d\n", x);
  x++;
} while (x <= 5);

int y = 0;
loop: 
  printf("%d this is goto\n", y);
  y++;
  if (y<5) {
    goto loop;
  }

  return 0;
}