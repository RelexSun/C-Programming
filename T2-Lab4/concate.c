#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char srcFile1[255], srcFile2[255], dstFile[255], buffer1[255], buffer2[255];
  printf("Input the first file: ");
  scanf("%s", srcFile1);
  printf("Input the second file: ");
  scanf("%s", srcFile2);
  printf("Input a file: ");
  scanf("%s", dstFile);

  int fileLen = strlen(dstFile); // hello.txt -> 9
  // hello.txt -> dstFile + fileLen - 4 = 0 + 9 - 4 which equals to 5, so dstFile[5]
  if (strcmp(dstFile + fileLen - 4, ".txt") != 0) { 
    // strcmp compare from first ascii of char 
    printf("The file must have .txt extension");
    exit(0);
  }

  FILE *file = fopen(srcFile1, "r");
  FILE *copyFile = fopen(srcFile2, "r");
  FILE *concate = fopen(dstFile, "w");
  if (file == NULL) {
    printf("Error! No source file");
    exit(8);
  }

  if (copyFile == NULL) {
    printf("Error! Cannot create destination file");
    exit(1);
  }

  if (concate == NULL) {
    printf("Error! Cannot create destination file");
    exit(2);
  }

  if (strcmp(srcFile1, srcFile2) == 0) {
    printf("Error! Same name");
    exit(3);
  }

  while(fgets(buffer1, 255, file) != NULL) {
    fprintf(concate, "%s", buffer1);
    fprintf(concate, "\n");
  }


  while(fgets(buffer2, 255, copyFile) != NULL) {
    fprintf(concate, "%s", buffer2);
  }
  fclose(file);
  fclose(copyFile);
  fclose(concate);

  FILE *readFile = fopen(dstFile, "r");
  if (readFile == NULL) {
    printf("Error cannot open file");
    exit(4);
  }

  char buffer3[255];

  while (fgets(buffer3, sizeof(buffer3), readFile) != NULL) {
    printf("%s", buffer3);
  }

  fclose(readFile);

  return 0;
}