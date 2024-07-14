#include <stdio.h>
#include <string.h>

void filter(char *str, char c) { 
  char buffer[50]; 
  int j = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] != c) {
      buffer[j++] = str[i]; 
    }
  }
  strcpy(str, buffer); 
}

int main() {
  char str[50], c;
  printf("Input string: ");
  fgets(str, sizeof(str), stdin);
  printf("Filter char: ");
  scanf("%c", &c);
  filter(str, c);
  printf("%s", str);

  return 0;
}

// user input 2 values 
// store these values in pointer
// ouput multiple of these 2 values