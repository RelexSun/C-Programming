#include <stdio.h>
#include <string.h>

void shift(char *str, int n, char *garbage) {
  char buffer[50], buffer2[50];
  int j = 0, k = 0;
  for (int i = 0; i <= strlen(str); i++) {
    if (i >= n) {
      buffer[j++] = str[i];
    } else {
      buffer2[k++] = str[i];
    }
  }

  strcpy(str, buffer);
  strcpy(garbage, buffer2);
}

int main() {
  char str[50], garbage[50];
  int n;

  printf("Input string: ");
  fgets(str, sizeof(str), stdin);
  printf("Shift n: ");
  scanf("%d", &n);
  shift(str, n, garbage);
  printf("str --> %s\n cut off --> %s", str, garbage);

  return 0;
}
