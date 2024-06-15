#include<stdio.h>

int main () {
  char inputFile[255], buffer[255];
  printf("Input a file: ");
  scanf("%s", &inputFile);

  // FILE *file = fopen(inputFile, "w");

  // if (file == NULL) {
  //   printf("Error! No source file!");
  // }

  // fprintf(file, "Hello everybody!\nI am a student at IDT. I am 19 years old.");
  
  // fclose(file);

  FILE *outFile = fopen(inputFile, "r");
  
  while(fgets(buffer, 255, outFile) != NULL) {
    printf("%s", buffer);
  }

  fclose(outFile);
  return 0;
}