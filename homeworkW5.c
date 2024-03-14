#include<stdio.h>

int main () {
// Camel Case --> myVariableName
// Pascal Case --> MyVariableName
// Snake Case --> my_variable_name

  int x, y;
  x = 10;
  y = 15;
  x = x++;
  y = ++y;
printf("x = %d\n", x);
printf("y = %d\n", y++);
printf("Is x small then y? %d\n", x < y);
printf("IS x larger then y? %d\n", x > y);
printf("Is y equal to 17? %d\n", y == 17);

return 0;
}