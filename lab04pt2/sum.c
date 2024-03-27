#include <stdio.h>

int main() {
  int x, y, sum;
  printf("Enter integers: "); 
  scanf("%d%d", &x, &y);

sum = x + y;

if (sum >= 15 || sum <= 20) {
  printf("%d", 20);

} else {
  printf("%d", sum);
  }

  return 0;
}