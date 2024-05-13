#include<stdio.h>
#include<string.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main() {

// TODO: enum = a user defined type of named integer identifiers helps to make a program more readable

  enum Day today = Sun;

  printf("%d", today); // enums are NOT STRINGs, but they can be treated as int

  if (today == Sun || today == Sat) {
    printf("\nRest Day");
  } else {
    printf("\nChest Day");
  }

  return 0;
} 