#include<stdio.h>
#include<string.h>

int stringCmp(char str[], char letter) {

  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == letter) return 1;
  }
  return 0;
}

int main() {
  char str[225], letter;
  printf("Input a string: ");
  fgets(str, sizeof(str), stdin);
  printf("Input a character to check: ");
  scanf("%c", &letter);
  if (stringCmp(str, letter)) {
    printf("The character '%c' exist in '%s", letter, str);
  } else {
    printf("The character '%c' doesn't exist in '%s'", letter, str);
  }
  return 0;
}