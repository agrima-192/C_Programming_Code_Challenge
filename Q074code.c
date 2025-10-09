//Program to Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int originalMatrix[rows][cols];
    int transposeMatrix[cols][rows];

    printf("\nEnter elements of the original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &originalMatrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposeMatrix[j][i] = originalMatrix[i][j];
        }
    }

    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
