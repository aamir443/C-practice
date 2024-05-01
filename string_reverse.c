<<<<<<< HEAD
#include <stdio.h>

int main() {
    char str[1000], reversedStr[1000];
    int i, j;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    for (i = 0; str[i] != '\0'; i++) {
    }
    for (j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i - 1];
    }
    reversedStr[j] = '\0';
    printf("Reversed string: %s\n", reversedStr);
    return 0;
}
=======
#include <stdio.h>

int main() {
    char str[1000], reversedStr[1000];
    int i, j;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    for (i = 0; str[i] != '\0'; i++) {
    }
    for (j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i - 1];
    }
    reversedStr[j] = '\0';
    printf("Reversed string: %s\n", reversedStr);
    return 0;
}
>>>>>>> 5814af1bec1b18baa2c33de9613489f330b55d8c
