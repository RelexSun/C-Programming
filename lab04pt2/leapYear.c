#include <stdio.h>

int main() {
  int year;
  printf("Enter Year: ");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
    printf("%d is a LEAP year", year);
  } else {
    printf("NOT a leap year");
  }

return 0;
}