//Program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
    // Count the number of digits
    // This loop determines 'n', the power to which each digit will be raised.
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10; // Get the last digit
        result += pow(remainder, n);     // Add the digit raised to the power 'n'
        originalNumber /= 10;            // Remove the last digit
    }
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
