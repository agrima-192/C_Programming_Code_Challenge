/*Program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main() {
    int i;
    // First part: 1 star
    printf("*\n\n");
    // Second part: 3 stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    // Third part: 5 stars
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");
    // Fourth part: 3 stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    // Last part: 1 star
    printf("*\n");

    return 0;
}
