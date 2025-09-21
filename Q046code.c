//Program to print the following pattern:
/*
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main() {
    int i;
    // Loop to print the pattern five times
    for (i = 0; i < 5; i++) {
        printf("*****"); // Print five asterisks
        if (i < 4) {     // Add a space after each set of asterisks, except the last one
            printf("\n");
        }
    }
    return 0;
}
