//Program to find the LCM of two numbers.
#include <stdio.h>
// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    gcd = calculateGCD(num1, num2);
    lcm = (num1 * num2) / gcd;

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
