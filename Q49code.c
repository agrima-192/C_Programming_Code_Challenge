//Write a program to print the following pattern:
/*5
45
345
2345
12345*/
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for the number of rows (from 5 down to 1)
    for (i = 5; i >= 1; i--) {
        // Inner loop for printing numbers in each row
        // It prints numbers from 'i' up to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}
