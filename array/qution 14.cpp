// 14.Perform 2D matrix array


#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][100], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter dimensions for the matrices (rows and columns): ");
    scanf("%d %d", &rows, &cols);

    int matrix1[100][100], matrix2[100][100], result[100][100];

    // Input matrices
    printf("For matrix 1:\n");
    inputMatrix(matrix1, rows, cols);

    printf("For matrix 2:\n");
    inputMatrix(matrix2, rows, cols);

    // Displaying the original matrices
    printf("\nOriginal matrices:\n");
    printf("Matrix 1:\n");
    printMatrix(matrix1, rows, cols);

    printf("Matrix 2:\n");
    printMatrix(matrix2, rows, cols);

    // Adding matrices
    addMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nAddition of matrices:\n");
    printMatrix(result, rows, cols);

    // Subtracting matrices
    subtractMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nSubtraction of matrices:\n");
    printMatrix(result, rows, cols);

    // Multiplying matrices
    multiplyMatrices(matrix1, matrix2, result, rows, cols, cols);
    printf("\nMultiplication of matrices:\n");
    printMatrix(result, rows, cols);

    
}
