#include<stdio.h>

int main() {
  int candies[10], extraCandies, numOfKid;
  printf("Input the numbers of kids: ");
  scanf("%d", &numOfKid);
  for (int i = 0; i < numOfKid; i++) {
    printf("Input numbers of candies for %dth kid: ");
    scanf("%d", &candies[i]);
  }

  int length = sizeof(candies)/sizeof(candies[0]);

  for (int i = 0; i < length; i++) {
    
  }

  return 0;
}