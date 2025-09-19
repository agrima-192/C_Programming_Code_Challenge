//Program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char binaryNumber[100];
    char onesComplement[100];
    int i, length;

    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    length = strlen(binaryNumber);
    for (i = 0; i < length; i++) {
        if (binaryNumber[i] == '0') {
            onesComplement[i] = '1';
        } else if (binaryNumber[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Invalid binary number entered!\n");
            return 1;
        }
    }

    onesComplement[length] = '\0'; // Null-terminate the 1's complement string

    printf("Original binary number: %s\n", binaryNumber);
    printf("1's complement: %s\n", onesComplement);

    return 0;
}
