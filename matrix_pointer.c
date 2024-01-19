#include <stdio.h>

// Function to add two matrices using pointers
void addMatrices(int *matrix1, int *matrix2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Accessing elements using pointers
            *(result + i * cols + j) = *(matrix1 + i * cols + j) + *(matrix2 + i * cols + j);
        }
    }
}

// Function to display a matrix
void displayMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Accessing elements using pointers
            printf("%d\t", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add matrices using pointers
    addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], rows, cols);

    // Display the result matrix
    printf("Resultant Matrix:\n");
    displayMatrix(&result[0][0], rows, cols);

    return 0;
}
