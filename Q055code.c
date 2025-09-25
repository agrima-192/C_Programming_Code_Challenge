//Program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i, j, isPrime;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;

        // Check for divisibility from 2 up to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // If divisible, it's not prime
                break;       // No need to check further divisors
            }
        }

        // If isPrime is still 1, the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
