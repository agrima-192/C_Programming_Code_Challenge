//Program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int number, digit;
    long long product_of_odd_digits = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }

    while (number > 0) {
        digit = number % 10;

        if (digit % 2 != 0) { // Check if the digit is odd
            product_of_odd_digits *= digit; // Multiply if it's an odd digit
        }

        number /= 10; // Remove the last digit
    }

    printf("Product of odd digits: %lld\n", product_of_odd_digits);

    return 0;
}
