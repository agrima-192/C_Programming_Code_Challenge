// Program to find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int size;
    int sum = 0;

    printf("Enter the size of the square matrix (e.g., for a 3x3 matrix, enter 3): ");
    scanf("%d", &size);
    int matrix[size][size];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of the main diagonal elements is: %d\n", sum);
    return 0;
}
