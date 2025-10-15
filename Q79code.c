//Program to perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for (int sum = 0; sum < rows + cols - 1; sum++) {
        if (sum % 2 == 0) { 
            for (int i = (sum < rows ? sum : rows - 1); i >= 0; i--) {
                int j = sum - i;
                if (j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        } else { 
            for (int i = (sum < cols ? 0 : sum - cols + 1); i < rows; i++) {
                int j = sum - i;
                if (j >= 0) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
