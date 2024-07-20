#include<stdio.h>
#include<stdlib.h>

typedef struct {
  int id;
  char surname[50];
  char name[50];
  int age;
  char gender;
} Student;

int Gender(char g) {
  return (g == 'm' || g == 'M' || g == 'f' || g == 'F');
}

void createStudent(int n) {
  FILE *file = fopen("student.txt", "a");
  if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }
  Student student;
  for (int i = 0; i < n; i++) {
        printf("Enter information of student %d\n", i+1);
        student.id = i+1;
        printf("Enter surname: ");
        scanf("%s", student.surname);
        printf("Enter name: ");
        scanf("%s", student.name);
        printf("Enter age: ");
        scanf("%d", &student.age);
        getchar();
        int validGender = 0;
        while (!validGender) {
            printf("Enter gender (m/f): ");
            scanf("%c", &student.gender);
              getchar();
            if (Gender(student.gender)) {
                validGender = 1;
            } else {
                printf("Wrong gender. Please enter 'm', 'M', 'f', or 'F'.\n");
            }
        }
        
    fprintf(file, "%d %s %s %d %c\n", student.id, student.name, student.surname, student.age, student.gender);
    }
  
  fclose(file);
}

void deleteStudent() {
    FILE *file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("No students to delete.\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Unable to open temporary file.\n");
        fclose(file);
        return;
    }

    Student student;
    int id;
    printf("Enter id to delete: ");
    scanf("%d", &id);
    int found = 0;
    while (fscanf(file, "%d %s %s %d %c", &student.id, student.surname, student.name, &student.age, &student.gender) != EOF) {
        if (student.id != id) {
            fprintf(tempFile, "%d %s %s %d %c\n", student.id, student.surname, student.name, student.age, student.gender);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (!found) {
        printf("Student with id %d not found.\n", id);
        remove("temp.txt");
    } else {
        remove("student.txt");
        rename("temp.txt", "student.txt");
        printf("Student with id %d deleted.\n", id);
    }
}

void displayStudent() {
  FILE *file = fopen("student.txt", "r");
  if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }
  Student students;
  printf("\nDisplay Student\n");
  while (fscanf(file, "%d %s %s %d %c", &students.id, students.name, students.surname, &students.age, &students.gender) != EOF)  {
    printf("\n%d %s %s %d %c\n", students.id, students.name, students.surname, students.age, students.gender);
  }

  fclose(file);
}

int main() {
  int n, choice;
  while (1) {

  printf("\nstudent program\n");
  printf("\n1. Add student\n");
  printf("\n2. Delete student\n");
  printf("\n3. Display student\n");
  printf("\n4. Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter number of student: ");
      scanf("%d", &n);
      createStudent(n);
      break;
    case 2:
      deleteStudent();
      break;
    case 3:
      displayStudent();
      break;
    case 4:
      exit(0);
      break;
    default:
      break;
    }
  }
  return 0;
}