#include<stdio.h>

void HowFar(int mainTank, int secondaryTank) {
  int distance = 0;

  while (mainTank > 0){
    if (mainTank >= 5) {
      mainTank -= 5;
      distance += 50;

      if (secondaryTank > 0) {
        mainTank += 1;
        secondaryTank -= 1;
      }

    } else {
       distance += mainTank * 10;
      mainTank = 0;
    }
  }
  printf("Distance: %d", distance);
}

int main() {
  int mainTank, secondaryTank;
  printf("Enter mainTank & secondaryTank: ");
  scanf("%d %d", &mainTank, &secondaryTank);

    HowFar(mainTank, secondaryTank);

  return 0;
}