#include<stdio.h>
#include<math.h>

void Power(float *x, const int n) {
  float result = pow(*x, n);
  *x = result;
}

int main() {
  float x;
  int y;

  printf("input x and y: ");
  scanf("%f %d", &x, &y);
  Power(&x, y);

  printf("Power(%.2f, %d) = %.2f", x, y, x);

  return 0;
}