#include <stdio.h>
#include <string.h>

void shift(char *str, int n) {
  char buffer[50];
  int j = 0;
  for (int i = 0; i <= strlen(str); i++) {
    if (i >= n) {
      buffer[j++] = str[i];
    } 
  }

  strcpy(str, buffer);

}

int main() {
  char str[50];
  int n;

  printf("Input string: ");
  fgets(str, sizeof(str), stdin);
  printf("Shift n: ");
  scanf("%d", &n);
  shift(str, n);
  printf("%s", str);

  return 0;
}
