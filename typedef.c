#include<stdio.h>
#include<string.h>

// typedef char user[25];

// struct User {
//   char name[25];
//   char password[12];
//   int id;
// };

typedef struct  {
  char name[25];
  char password[12];
  int id;
} User;

int main() {
  //TODO: typedef: reserved keyword that gives an existing datatypes a "nickname"
  // user user1 = "Sun";
  // struct User user1 = {"Sun", "password123", 1};

  User user1 = {"Sun", "password123", 1};

  printf("%s\n", user1.name);
  printf("%s\n", user1.password);
  printf("%d\n", user1.id);

  return 0;
}