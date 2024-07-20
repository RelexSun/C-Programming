#include<stdio.h>
#include<string.h>

struct Address {
  char hn[20];
  char st[20];
  char city[10];
};

struct Seller{
  char name[50];
  struct Address address;
};

typedef struct {
  int id;
  char name[50];
  char produceDate[20];
  char expireDate[20];
  char color[10];
  struct Seller seller; 
} Product;


int main() {

  int amount;
  printf("Enter number of product");
  scanf("%d", &amount);
  Product products[amount];
  char colors[5][10] = {"red", "yellow", "blue", "white", "black"};

  for (int i = 0; i < amount; i++) {
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
    printf("Enter name of the seller: ");
    scanf("%s", products[i].seller.name);
    printf("Enter house name: ");
    scanf("%s", products[i].seller.address.hn);
    printf("Enter street: ");
    scanf("%s", products[i].seller.address.st);
    printf("Enter city: ");
    scanf("%s", products[i].seller.address.city);

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

  printf("================ Data ===================");
  for (int i = 0; i < amount; i++) {
    printf("\nID: %d\n", products[i].id);
    printf("Name of product: %s\n", products[i].name);
    printf("Date of produce for the product: %s\n", products[i].produceDate);
    printf("Date of expire for the product: %s\n", products[i].expireDate);
    printf("Color of the product: %s\n", products[i].color);
    printf("Seller name: %s\n", products[i].seller.name);
    printf("\n---------- Seller address ----------\n");
    printf("Seller house: %s", products[i].seller.address.hn);
    printf("Seller sreet: %s", products[i].seller.address.st);
    printf("Seller city: %s", products[i].seller.address.city);
    printf("\n");
  }

  return 0;
}