#include <stdio.h>

int main() {
  int x, y;
  printf("Enter integers: "); 
  scanf("%d%d", &x, &y);

if ((x == 15 || x == 20) && (y == 15 || y == 20)) {
  printf("20");

} else {
  printf("The sum between %d and %d is %d", x, y, x + y);
}


  return 0;
}