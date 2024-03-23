#include<stdio.h>
#include<math.h>

int main() {
  int delta, x1, x2, a, b, c;
  printf("Enter the value of a, b and c: ");
  scanf("%d%d%d", &a, &b, &c);

// input validation
  if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 1; // will not execute the bottom code
    };

  delta = pow(b, 2) - (4 * a * c);

  if (delta > 0) {
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
    printf("Delta > 0 therefore:\nx1 = %d \nx2 = %d ", x1, x2);

  } else if (delta == 0) {
    x1 = x2 = -b / (2 * a);
    printf("Delta = 0 therefore:\nx1 = %d \nx2 = %d ", x1, x2);

  } else {
    printf("no roots");
  }

//TODO: it will look ugly if we use switch case
  /* switch (delta) {
    case 0 :
      x1 = x2 = -b / (2 * a);
      printf("Delta = 0 therefore:\nx1 = %d \nx2 = %d ", x1, x2);
    break;

    default :
      if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Delta > 0 therefore:\nx1 = %d \nx2 = %d ", x1, x2);
      } else {
        printf("no roots");
      }
    break;
} */

  return 0;
}