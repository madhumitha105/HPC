#include <stdio.h>
#include <stdlib.h>

void readMatrixFromFile(const char *filename, int rows, int cols, int matrix[rows][cols]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }
    fclose(file);
}

void writeMatrixToFile(const char *filename, int rows, int cols, int matrix[rows][cols]) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fprintf(file, "%d ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);
}

void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input the matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare matrices
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];

    char file1[50], file2[50], outputFile[50];

    // Input filenames
    printf("Enter the name of the first input file: ");
    scanf("%s", file1);
    printf("Enter the name of the second input file: ");
    scanf("%s", file2);
    printf("Enter the name of the output file: ");
    scanf("%s", outputFile);

    // Read matrices from files
    readMatrixFromFile(file1, rows, cols, matrix1);
    readMatrixFromFile(file2, rows, cols, matrix2);

    // Perform matrix addition
    addMatrices(rows, cols, matrix1, matrix2, result);

    // Write result to output file
    writeMatrixToFile(outputFile, rows, cols, result);

    printf("Matrix addition completed. Result written to %s\n", outputFile);

    return 0;
}