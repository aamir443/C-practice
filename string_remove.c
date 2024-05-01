<<<<<<< HEAD
#include <stdio.h>

void removeSpaces(char *str);

int main() {
    char inputString[100];
    printf("Enter a string with spaces: ");
    scanf("%[^\n]",inputString);
    removeSpaces(inputString);
    printf("String without spaces: %s\n", inputString);
    return 0;
}

void removeSpaces(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
=======
#include <stdio.h>

void removeSpaces(char *str);

int main() {
    char inputString[100];
    printf("Enter a string with spaces: ");
    scanf("%[^\n]",inputString);
    removeSpaces(inputString);
    printf("String without spaces: %s\n", inputString);
    return 0;
}

void removeSpaces(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
>>>>>>> 5814af1bec1b18baa2c33de9613489f330b55d8c
