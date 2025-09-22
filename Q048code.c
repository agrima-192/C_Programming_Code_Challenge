//Program to print the following pattern:
/*
1
12
123
1234
12345
*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // You can change this value to print more or fewer rows

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
