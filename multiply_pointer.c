#include <stdio.h>

// Function to multiply two matrices using pointers
void multiplyMatrices(int (*matrix1)[2], int (*matrix2)[2], int (*result)[2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(*(result + i) + j) = 0; // Initialize result matrix element to 0

            for (int k = 0; k < 2; k++) {
                *(*(result + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
        }
    }
}

// Function to display a 2x2 matrix
void displayMatrix(int (*matrix)[2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply matrices using pointers
    multiplyMatrices(matrix1, matrix2, result);

    // Display the result matrix
    printf("Resultant Matrix:\n");
    displayMatrix(result);

    return 0;
}
