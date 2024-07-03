#include<stdio.h>

void addition(int *a , int b){
  // a = a + b; // incorrect (pass by reference so we should dereference it)
  *a = *a + b;
}

int main(){
  int a = 9;
  int b = 2;
  /* pointer point to NULL */
  // int *p_a = NULL; // incorrect a pointer should point to address of a
  int *p_a = &a;

  //display a, b
  printf("Before swap: (a:%d, b:%d)\n", *p_a, b);// dereference p_a 
  
  /* swap value of a and b */
  /* should use *
  p_a = a + b;
  b = p_a - b;
  a = p_a - b; 
  */
  *p_a = a + b;
  b = *p_a - b;
  a = *p_a - b; 

  /* display a, b */
  // printf("After swap: (a:%d, b:%d)\n", p_a, b); should dereference 
  printf("After swap: (a:%d, b:%d)\n", *p_a, b);

  /* pointer point to b */
  // int *p_b = b; point to adderess of b
  int *p_b = &b;

  /* display a, b */
  printf("Before sum: (a:%d, b:%d)\n", *p_a, *p_b); // dereference p_a and p_b

  /* a equal to a + b */
  addition(&a, b); // should pass by reference

  /* display a, b */
  printf("After sum: (a:%d, b:%d)\n", *p_a, *p_b); // dereference p_a and p_b
  
  return 0;
}