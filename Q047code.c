//Write a program to print the following pattern:
/*
*
**
***
****
*****
*/
#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Outer loop for iterating through each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars in the current row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing stars for the current row
    }

    return 0;
}
