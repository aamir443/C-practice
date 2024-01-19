#include <stdio.h>

// Function to swap the values of two integers using double pointer
void swap(int **ptr1, int **ptr2) {
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    
    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", *ptr1, *ptr2);
    
    // Call the swap function with double pointers
    swap(&ptr1, &ptr2);
    
    printf("After swapping:\n");
    printf("num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    return 0;
}
