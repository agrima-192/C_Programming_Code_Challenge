//Program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int count = 0;
    int i = 1;

    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    while (count < n) {
        sum += i; // Add the current odd number to the sum
        i += 2; // Move to the next odd number (e.g., 1, then 3, then 5...)
        count++; // Increment the count of odd numbers found
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
