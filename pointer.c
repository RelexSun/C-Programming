#include<stdio.h>

int main() {

  /*
  pointer = a "variable-like" reference that holds a memory addess to another variable, array, etc.     
              some tasks are performed more easily with pointers
              * = indirection operator (value at addess)
  */ 

  /*
    Advantages of Using Pointers
    - less time in program execution
    - working on the original variable
    - with the help of pointers, we can create data structures (linked-list, stack, queue)
    - returning more than one values from functions
    - searching and sorting large data very easily
    - Dynamically memory allocation
  */

  int age = 21;
  int *pAge = &age;
  int *pId = NULL; // good practice to assign NULL if declaring a pointer

  pId = &age;

  printf("address of age: %p\n", &age);
  printf("value of pAge: %p\n", pAge);

  printf("value of age: %d\n", age);
  printf("value at stored addess: %d\n", *pAge); // *pAge = dereferencing

  return 0;
}