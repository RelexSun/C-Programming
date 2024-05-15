#include<stdio.h>

int main() {
  // FILE *pF = fopen("test.txt", "w"); // open file with writing mode

   FILE *pF = fopen("test.txt", "a"); // open file with apending mode

  fprintf(pF, "\nHello I'm writing from c again"); // write file

  fclose(pF); // close file

// to remove file
  if (remove("test.txt") == 0) {
    printf("remove file successfully");
  } else {
    printf("File was NOT deleted");
  }

  return 0;
}