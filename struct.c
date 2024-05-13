#include<stdio.h>
#include<string.h>

struct Person {
  char name[12];
  int age;
};

int main() {
/*
  struct = collection of related member ("variables")
            they can be of different data types
            listed under one name in a block of memory
            VERY SIMILAR to classes in other languages (but no methods)
*/

struct Person sun;
struct Person moon;

strcpy(sun.name, "Bro Sun");
sun.age = 20;

strcpy(moon.name, "Bro Moon");
moon.age = 22;

printf("%s\n", sun.name);
printf("%d\n", sun.age);

printf("%s\n", moon.name);
printf("%d\n", moon.age);

  return 0;
}