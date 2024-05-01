<<<<<<< HEAD
#include <stdio.h>

int main() {
  char str[100];
  int i, length = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++) {
    length++;
  }

  printf("Length of the string is: %d\n", length);

  return 0;
=======
#include <stdio.h>

int main() {
  char str[100];
  int i, length = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++) {
    length++;
  }

  printf("Length of the string is: %d\n", length);

  return 0;
>>>>>>> 5814af1bec1b18baa2c33de9613489f330b55d8c
}