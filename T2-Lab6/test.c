#include<stdio.h>
void addition(int *a , int b){
  *a = *a + b;
}
int main(){
  int a = 9;
  int b = 2;

  /* pointer point to NULL */
  int *p_a = &a;

  //display a, b
  printf("Before swap: (a:%d, b:%d)\n", *p_a, b);

  /* swap value of a and b */
  int temp = a + b;
  b = temp - b;
  a = temp - b;

  /* display a, b */
  printf("After swap: (a:%d, b:%d)\n", *p_a, b);

  /* pointer point to b */
  int *p_b = &b;

  /* display a, b */
  printf("Before sum: (a:%d, b:%d)\n", *p_a, *p_b);

  /* a equal to a + b */
  addition(p_a, b);

  /* display a, b */
  printf("After sum: (a:%d, b:%d)\n", *p_a, *p_b);

  return 0;
}