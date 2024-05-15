#include<stdio.h>

int main() {

  /*
    memory = an array of bytes within RAM (street)
    memory block = a single unit (byte) within memory, used to hold some value (person or house)
    memory addess = the addess of where a memory block is located (house address)
  */
  
  // data types matters a lot in memory space
  char a; // 1 byte
  short b; // 2 byte
  int c; // 4 byte
  double d[3]; // double is 8 byte then multiply by 3

  printf("%d bytes\n", sizeof(a));
  printf("%d bytes\n", sizeof(b));
  printf("%d bytes\n", sizeof(c));
  printf("%d bytes\n", sizeof(d));

  printf("%p\n", &a); // print out memory address of variable a

  return 0;
}