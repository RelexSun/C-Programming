#include<stdio.h>
#include<string.h>

struct Student {
  char name[12];
  float gpa;
};

int main() {

  struct Student student1 = {"Sun", 5.0};
  struct Student student2 = {"Nut", 0.5};
  struct Student student3 = {"Seaklang", 1.5};
  struct Student student4 = {"Nut's mom", 10.5};

  struct Student students[] = {student1, student2, student3, student4};

  int sizeOfArray = sizeof(students)/sizeof(students[0]);

  for (int i = 0; i < sizeOfArray; i++) {

    printf("%-12s\t", students[i].name);
    printf("%.2f\n", students[i].gpa);
  
  }

  return 0;
}