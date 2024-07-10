#include<stdio.h>
#include<string.h>

typedef struct {
  int id;
  char name[50];
  char hn[20];
  char st[20];
  char city[10];
} Seller;


int main() {
  Seller sellers[5];
  char colors[5][10] = {"red", "yellow", "blue", "white", "black"};

  for (int i = 0; i < 5; i++) {
    printf("\nEntering info for the seller number %d\n", i+1);
    sellers[i].id = i+1;

    printf("Enter the name of the seller: ");
    scanf("%s", sellers[i].name);
    printf("\nAddress of the seller number %d\n", i+1);
    printf("Enter the house number: ");
    scanf("%s", sellers[i].hn);
    printf("Enter the street: ");
    scanf("%s", sellers[i].st);
    printf("Enter the city: ");
    scanf("%s", sellers[i].city);
  }

  printf("\t\t\tPRODUCTS\t\t\t");
  for (int i = 0; i < 5; i++) {
    printf("\nInformation of the seller %d", i+1);
    printf("\nID: %d", sellers[i].id);
    printf("\nNAME: %s", sellers[i].name);
    printf("\nHouse Number: %s", sellers[i].hn);
    printf("\nStreet: %s", sellers[i].st);
    printf("\nCity: %s", sellers[i].city);
  }

  return 0;
}