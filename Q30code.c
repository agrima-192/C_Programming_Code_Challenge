//Program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        // Extract the last digit of the number
        remainder = num % 10;
        // Build the reversed number
        reversedNum = reversedNum * 10 + remainder;
        // Remove the last digit from the original number
        num /= 10; 
    }
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
