#include<stdio.h>
#include<string.h>

typedef struct {
  int id;
  char name[50];
  char produceDate[20];
  char expireDate[20];
  char color[10];
} Product;

int main() {
  int amount;
  printf("Enter number of product");
  scanf("%d", &amount);
  Product products[amount];
  char colors[5][10] = {"red", "yellow", "blue", "white", "black"};

  for (int i = 0; i < 5; i++) {
    printf("\nEntering info for product %d\n", i+1);
    products[i].id = i+1;

    printf("Enter the name of the product: ");
    scanf("%s", products[i].name);
    printf("Enter the date of produce for the product: ");
    scanf("%s", products[i].produceDate);
    printf("Enter the expiration date of produce for the product: ");
    scanf("%s", products[i].expireDate);
    printf("Enter the any 5 colors of the product (red, yellow, blue, white, black): ");
    scanf("%s", products[i].color);
    int invalidColor = 1;
    for (int j = 0; j < 5; j++) {
      if (strcmp(colors[j], products[i].color) == 0) {
        invalidColor = 0;
        break;
      }
    }
  if (invalidColor) {
    printf("\nInvalid color!!! Available option (red, yellow, blue, white, black): ");
    scanf("%s", products[i].color);
  }
  }
  
  printf("\t\t\tPRODUCTS\t\t\t");
  for (int i = 0; i < 5; i++) {
    printf("\nInformation of Product %d", i+1);
    printf("\nID: %d", products[i].id);
    printf("\nNAME: %s", products[i].name);
    printf("\nProduce Date: %s", products[i].produceDate);
    printf("\nExpiration Date: %s", products[i].expireDate);
    printf("\nColor: %s", products[i].color);
}

  return 0;
}