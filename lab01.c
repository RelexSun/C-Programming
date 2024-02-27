#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("Following are the Arithmetic operators in C:\n");

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of a %% b is %d\n", a % b); // Uncommented

    printf("\nFollowing are the increment/decrement operators:\n");

    printf("The value of a++ is %d\n", a++); // Pre-increment
    printf("The value of a-- is %d\n", a--); // Pre-decrement
    printf("The value of ++a is %d\n", ++a); // Post-increment
    printf("The value of --a is %d\n", --a); // Post-decrement

    printf("\nFollowing are the comparison operators in C:\n");

    printf("The value of a == b is %d\n", a == b);
    printf("The value of a != b is %d\n", a != b);
    printf("The value of a >= b is %d\n", a >= b);
    printf("The value of a <= b is %d\n", a <= b);
    printf("The value of a > b is %d\n", a > b);
    printf("The value of a < b is %d\n", a < b);

    printf("\nFollowing are the logical operators in C:\n");

    printf("The value of this logical AND operator ((a == b) && (a < b)) is: %d\n", (a == b) && (a < b));
    printf("The value of this logical OR operator ((a == b) || (a < b)) is: %d\n", (a == b) || (a < b));
    printf("The value of this logical NOT operator (!(a == b)) is: %d\n", !(a == b));

    return 0;
}
