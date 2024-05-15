#include<stdio.h>

int main() {
  // FILE *pF = fopen("test.txt", "w"); // open file with writing mode

  //TODO: FILE *pF = fopen("file location", "a"); you can also write file in another location

   FILE *pF = fopen("test.txt", "a"); // open file with apending mode 

  fprintf(pF, "\nHello I'm writing from c again"); // write file

  fclose(pF); // close file

// to remove file
  if (remove("test.txt") == 0) {
    printf("remove file successfully");
  } else {
    printf("File was NOT deleted");
  }

  /* Read file
    FILE *pF = fopen("file location", "r");
    char buffer[255]; will store the first line of text from the file

    if (pF == NULL) {
      printf("Unable to open file!\n")
    } else {
      while( fgets(buffer, 255, pF) != NULL) {
      printf("%s", buffer);
    }
    }
    fclose(pF);
  */

  return 0;
}