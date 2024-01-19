#include <stdio.h>
#include <stdlib.h>

void swap(int **a, int **b) {
    int *temp = (int*)malloc(5*sizeof(int));
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    swap((int**)&arr1, (int**)&arr2);

    for(int i=0; i<5; i++) printf("%d\t", arr1[i]);
    printf("\n");
    for(int i=0; i<5; i++) printf("%d\t", arr2[i]);
    printf("\n");
}