#include <stdio.h>

int main() {
  int number;
  printf("Enter an integer: ");
  int result = scanf("%d", &number);
  if (result != 1) {
    printf("Invalid input. You did not enter an integer.\n");
  } else {
    printf("You entered: %d\n", number);
  }
  return 0;
}

