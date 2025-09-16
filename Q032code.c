//Program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10;                     // Remove the last digit from the original number
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
