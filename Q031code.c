//Program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int decimal_num;
    long long binary_num = 0;
    int remainder, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    // Handle the special case of 0
    if (decimal_num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (decimal_num > 0) {
        remainder = decimal_num % 2;
        binary_num += remainder * place;
        decimal_num /= 2;
        place *= 10;
    }

    printf("Binary representation: %lld\n", binary_num);

    return 0;
}

