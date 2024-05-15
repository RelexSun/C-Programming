#include<stdio.h>


int main() {
  // BITWISE OPERATORS = special operators used in bit level programming
  
  // & = AND; 0 & 0 = 0; 1 & 1 = 1; 1 & 0 = 0; 
  // | = OR
  // ^ = XOR; 0 & 0 = 0; 1 & 1 = 1; 1 & 0 = 1; 
  // << left shift
  // >> right shift

  int x = 6; // 6 = 00000110
  int y = 12; // 12 = 00001100
  int z = 0; // 0 = 00000000

// 00000110 & 00001100 = 00000100 which is 4 
  z = x & y; // z = 4 (00000100) 
  printf("AND = %d\n", z);

  z = x | y;
  printf("OR = %d\n", z);

  z = x ^ y;
  printf("XOR = %d\n", z);

  z = x << 1;
  printf("SHIFT LEFT = %d\n", z);

  z = x >> 1;
  printf("SHIFT LEFT = %d\n", z);

  return 0;
}