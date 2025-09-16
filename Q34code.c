//Program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Iterate from 2 up to the square root of n
        // If n is divisible by any number in this range, it's not prime
        for (i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
                break;       // No need to check further
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
