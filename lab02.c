#include <stdio.h>
#include <string.h>

int main() {
  // challenge 1
//   int hour, min, sec;

//   printf("Enter hour: ");
//   scanf("%d", &hour);

//   printf("Enter minute: ");
//   scanf("%d", &min);

//   printf("Enter second: ");
//   scanf("%d", &sec);

//   int result = (hour*3600) + (min*60) + sec;
//   printf("It is %ds\n", result);


// challenge 2

// int totalSec;
// printf("Enter time in second: ");
// scanf("%d", &totalSec);

// int hours = totalSec / 3600;

// int minutes = (totalSec % 3600) / 60;

// int seconds = totalSec % 60;

// printf("It is %dh %dmn %ds", hours, minutes, seconds);

// challenge 3

char access[] = "sunsun123";

while (1) {
printf("Enter password: ");
char pass[20];
scanf("%s", pass);

if (strcmp(pass, access) == 0) {
  
  printf("access granted\n");
  break;

} else {
  
  printf("access denied\n");
};

};

  return 0;
}