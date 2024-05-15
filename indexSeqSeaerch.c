#include <stdio.h>

#define MAX_SIZE 100

int indexSequentialSearch(int arr[], int n, int key) {
    int index[MAX_SIZE], i, j, blockSize, last, found;

    blockSize = 5;

    for (i = 0; i < n / blockSize; i++) {
        index[i] = blockSize * i;
    }
    index[i] = n;   

    i = 0;
    while (i < n) {
        if (arr[index[i]] == key) {
            return index[i]; 
        }
        else if (arr[index[i]] < key) {
            i++; 
        }
        else {
            break; 
        }
    }

    last = (i == n / blockSize) ? n : index[i + 1];
    for (j = index[i]; j < last; j++) {
        if (arr[j] == key) {
            return j; 
        }
    }

    return -1; 
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int index = indexSequentialSearch(arr, n, key);

    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}
 
