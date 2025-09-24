/*Program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main() {
    int size = 4;
    int i, j, space;

    // First section: Upper half of the diamond (including the middle row)
    for (i = 1; i <= size; i++) {
        for (space = 1; space <= size - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Second section: Lower half of the diamond
    for (i = size - 1; i >= 1; i--) {
        for (space = 1; space <= size - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

