#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char srcFile[255], dstFile[255], buffer1[255], buffer2[255];
  printf("Input source file: ");
  scanf("%s", srcFile);
  printf("Input distination file: ");
  scanf("%s", dstFile);

    int fileLen = strlen(dstFile); // hello.txt -> 9
  // hello.txt -> dstFile + fileLen - 4 = 0 + 9 - 4 which equals to 5, so dstFile[5]
  if (strcmp(dstFile + fileLen - 4, ".txt") != 0) { 
    // strcmp compare from first ascii of char 
    printf("The file must have .txt extension");
    exit(0);
  }

  FILE *file = fopen(srcFile, "r");
  FILE *outFile = fopen(dstFile, "w");
  if (file == NULL) {
    printf("Error! No source file");
    exit(8);
  }

  if (outFile == NULL) {
    printf("Error! Cannot create destination file");
    exit(9);
  }

  if (strcmp(srcFile, dstFile) == 0) {
    printf("Error! Same name");
    exit(10);
  }

  while(fgets(buffer1, 255, file) != NULL) {
    fputs(buffer1, outFile);
  }

  fclose(file);
  fclose(outFile);

  FILE *read = fopen(dstFile, "r");

  while(fgets(buffer2, 255, read) != NULL) {
    printf("%s", buffer2);
  }

fclose(read);

  return 0;
}