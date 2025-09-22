//Program to print the following pattern:
/*
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main() {
    int rows = 5;

    // Outer loop for rows, starting from 5 and decreasing to 1
    for (int i = rows; i >= 1; --i) {
        // Inner loop to print leading spaces for right alignment
        // Prints 'rows - i' spaces for each row
        for (int space = 0; space < rows - i; ++space) {
            printf(" ");
        }

        // Inner loop to print stars for the current row
        // Prints 'i' stars for each row
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        
        // Print a newline character to move to the next line
        printf("\n");
    }

    return 0;
}
