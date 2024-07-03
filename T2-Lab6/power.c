#include<stdio.h>

void Power(float *x, const int n) {
  float result = 1.0;
  for (int i = 1; i <= n; i++) { 
    result *= *x;
  }
  *x = result;
}

int main() {
  float x;
  int y;

  printf("input x and y: ");
  scanf("%f %d", &x, &y);
  float temp = x;
  Power(&x, y); 

  printf("Power(%.2f, %d) = %.2f", temp, y, x); 

  return 0;
}