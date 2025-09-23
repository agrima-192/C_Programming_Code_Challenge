//Program to print the following pattern:
/*    5
   45
  345
 2345
12345*/
#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows in the pattern
    
    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop to print the leading spaces for right alignment
        // The number of spaces decreases as the row number increases
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Inner loop to print the numbers
        // The numbers printed start from (rows - i + 1) and go up to 'rows'
        for (int j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        
        // After each row, print a newline character
        printf("\n");
    }
    
    return 0;
}
