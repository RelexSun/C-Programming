#include<stdio.h>
#include<time.h>

typedef struct {
  int day;
  int month;
  int year;
} DOB;

typedef struct {
  int id;
  char surname[50];
  char name[50];
  DOB dob;
} Student;

  int DOBValidator(int day, int month, int year) {
  time_t t = time(NULL);
  struct tm date = *localtime(&t);
  int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (month < 1 || month > 12) return 0;
  if (year > date.tm_year + 1900) return 0;
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    daysInMonth[1] = 29; 
  }
  if (day < 1 || day > daysInMonth[month - 1]) return 0;

  return 1;
}

int youngest(Student *students, int n) {
  int youngest_index = 0;
  for (int i = 0; i < n; i++) {
    if (students[i].dob.year > students[youngest_index].dob.year ||
        (students[i].dob.year == students[youngest_index].dob.year && students[i].dob.month > students[youngest_index].dob.month) ||
        (students[i].dob.year == students[youngest_index].dob.year && students[i].dob.month == students[youngest_index].dob.month && students[i].dob.day > students[youngest_index].dob.day)) {

        youngest_index = i;
    }
  }
  return youngest_index;
}

int main() {
  int n;
  printf("Enter number of student: ");
  scanf("%d", &n);
  Student students[n];
  for (int i = 0; i < n; i++) {
    printf("Enter information of student %d\n", i+1);
    students[i].id = i+1;
    printf("Enter surname: ");
    scanf("%s", students[i].surname);
    printf("Enter name: ");
    scanf("%s", students[i].name);
    do {
    printf("Enter DOB: ");
    scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, &students[i].dob.year);
    if (!DOBValidator(students[i].dob.day,students[i].dob.month, students[i].dob.year)) {
      printf("\nInvalid DOB\n");
    }
    } while (!DOBValidator(students[i].dob.day,students[i].dob.month, students[i].dob.year));
  }

  int young = youngest(&students, n);
  printf("%s %s is the youngest", students[young].surname, students[young].name);

  return 0;
}