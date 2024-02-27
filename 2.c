#include<stdio.h>

int main() {
  printf("This is a string with a new line\n\"and a double quote character\"\n");

  char c = 'a';
  short s =10;
  int i = 100;
  long l = 10000;
  float f = 3.14;
  double d = 3.14159;

  printf("char: %c\n", c);
  printf("short: %hd\n", s);
  printf("int: %d\n", i);
  printf("long: %ld\n", l);
  printf("float: %.2f\n", f);
  printf("double: %lf\n", d);


  return 0;
}