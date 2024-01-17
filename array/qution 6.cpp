/*6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array*/#include <stdio.h>

// Function to input a matrix from the user
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
void addMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows1, int cols1, int cols2) {
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
    int rows1, cols1, rows2, cols2;

    // Input matrix dimensions
    printf("Enter dimensions for the first matrix (rows and columns): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter dimensions for the second matrix (rows and columns): ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrices can be added, subtracted, and multiplied
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added, subtracted, and multiplied with the given dimensions.\n");
        return 1;
    }

    int matrix1[100][100], matrix2[100][100], result[100][100];

    // Input matrices
    inputMatrix(matrix1, rows1, cols1);
    inputMatrix(matrix2, rows2, cols2);

    // Add matrices
    addMatrix(matrix1, matrix2, result, rows1, cols1);
    printf("\nAddition:\n");
    printMatrix(result, rows1, cols1);

    // Subtract matrices
    subtractMatrix(matrix1, matrix2, result, rows1, cols1);
    printf("\nSubtraction:\n");
    printMatrix(result, rows1, cols1);

    // Multiply matrices
    multiplyMatrix(matrix1, matrix2, result, rows1, cols1, cols2);
    printf("\nMultiplication:\n");
    printMatrix(result, rows1, cols2);

    return 0;
}
