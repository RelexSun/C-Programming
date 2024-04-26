#include<stdio.h>
#include<unistd.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char access[] = "1234";
  int inCorrectPass = 0;

  while (1) {
    char password[20];
    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(password, access) == 0){ // compare string
      printf("OK jol ban");
      break;

    } else {
      printf("Ot oy jol!!!\n");
      inCorrectPass++;

      if (inCorrectPass == 3) {

        inCorrectPass = 0;
        printf("\033[H\033[J");

        for (int i = 5; i > 0; i--) {
        printf("Try again in %d", i);
        fflush(stdout); // to print before sleep
        sleep(1);
        printf("\033[H\033[J"); // to clear the screen
        }

      }
    }
  }

  return 0;
}