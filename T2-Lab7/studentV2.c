#include<stdio.h>

typedef struct {
  int id;
  char surname[50];
  char name[50];
  int day;
  int month;
  int year;
} Student;

int youngest(Student *students) {
  int youngest_index = 0;
  for (int i = 0; i < 10; i++) {
    if (students[i].year > students[youngest_index].year ||
        (students[i].year == students[youngest_index].year && students[i].month > students[youngest_index].month) ||
        (students[i].year == students[youngest_index].year && students[i].month == students[youngest_index].month && students[i].day > students[youngest_index].day)) {

        youngest_index = i;
    }
  }
  return youngest_index;
}

int main() {
  Student students[10];
  for (int i = 0; i < 10; i++) {
    printf("Enter information of student %d\n", i+1);
    students[i].id = i+1;
    printf("Enter surname: ");
    scanf("%s", students[i].surname);
    printf("Enter name: ");
    scanf("%s", students[i].name);
    printf("Enter DOB: ");
    fscanf("%d %d %d", &students[i].day, &students[i].month, &students[i].year);
  }
  

  int young = youngest(&students);
  printf("%s %s is the youngest", students[young].surname, students[young].name);


  // for (int i = 0; i < 10; i++) {
  //   printf("\nInformation every student\n");
  //   printf("Student %d", students[i].id);
  //   printf("\nSURNAME: %s", students[i].surname);
  //   printf("\nNAME: %s", students[i].name);
  //   printf("\nAGE: %d", students[i].age);
  // }

  return 0;
}