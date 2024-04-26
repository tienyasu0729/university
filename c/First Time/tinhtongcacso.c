#include <stdio.h>

int main() {
  int digits = 0, letters = 0, others = 0;
  char c;

  printf("Enter characters: ");
  while ((c = getchar()) != 10) {
    if (c >= '0' && c <= '9') {
      digits++;
    } else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
      letters++;
    } else {
      others++;
    }
  }

  printf("Digits: %d\nLetters: %d\nOthers: %d\n", digits, letters, others);

  return 0;
}

