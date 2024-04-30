#include<stdio.h>


int main() {
  int option;
  float currency;
  printf("Exchange Currency!!!\nPress 1 for Riel to USD\nPress 2 for USD to Riel");
  printf("\nEnter: ");
  scanf("%d", &option);

  if (option == 1) {
    printf("Enter amount in Riel: ");
    scanf("%f", &currency);
    printf("Riel to USD: %.2f$", currency / 4000);

  } else if (option == 2) {
    printf("Enter amount in USD: ");
    scanf("%f", &currency);
    printf("USD to Riel: %.2friels", currency * 4000);

  }

  return 0;
}