#include<stdio.h>

int main() {
    int n = 0;
    for (int i=3;i<21;i++) {
      int result = ((i-1)*(i-2))/(2*1140);
      n += result;
    }
    printf("%d",n);
    return 0;
}