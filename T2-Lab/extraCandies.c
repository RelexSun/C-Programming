#include<stdio.h>
#include <stdbool.h> 

// const char* boolToString(bool value) { // convert bool to string
//     return value ? "true" : "false";
// }

int main() {
  int extraCandies, numOfKid;
  printf("Input the numbers of kids: ");
  scanf("%d", &numOfKid);
    printf("Input the numbers of extraCandies: ");
  scanf("%d", &extraCandies);

  int candies[numOfKid];
  for (int i = 0; i < numOfKid; i++) {
    printf("Input numbers of candies for %dth kid: ", i + 1);
    scanf("%d", &candies[i]);
  }

  int length = sizeof(candies)/sizeof(candies[0]);
  printf("The length is %d\n", length);
  // bool boolArray[numOfKid];
  int boolArray[numOfKid];
  
  int temp = candies[0];
  for (int i = 0; i < length; i++) {
    if (temp < candies[i]) {
      temp = candies[i];
    }
  }
  printf("largest is %d\n", temp);

  for (int i = 0; i < length; i++) {
    if (candies[i] + extraCandies >= temp) {
      boolArray[i] = 1;
    } else {
      boolArray[i] = 0;
    }
  }

  // for (int i = 0; i < length; i++) {
  //   printf("Kid %d can have the greatest number of candies: %s\n", i + 1, boolToString(boolArray[i]));
  // }

  for (int i = 0; i < length; i++) {
    if (boolArray[i]) {
      printf("true ");
    } else {
      printf("false ");
    }
  }

  return 0;
}