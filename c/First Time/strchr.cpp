#include <stdio.h>
#include <string.h>

int main() {
   char str[] = "Hello, world!";
   char *ptr = strchr(str, 'o');
   printf("Chu?i con k? t? v? trí '%c': %s", *ptr, ptr);
   return 0;
}
