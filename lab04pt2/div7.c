#include <stdio.h>

int main() {
  for (int i = 1000; i <= 2000; i++) {
    if (i % 7 == 0 && i % 5 != 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}