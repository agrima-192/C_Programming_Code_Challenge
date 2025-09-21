//Program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0; // Use double for accurate floating-point summation

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // The first term is 1, which can be treated as 1/1
    sum = 1.0;

    // Loop for the remaining terms (from the second term onwards)
    // The numerator increases by 2 (3, 5, 7, ...)
    // The denominator increases by 2 (4, 6, 8, ...)
    for (i = 2; i <= n; i++) {
        double numerator = (double)(2 * i - 1); // Calculate odd numerator
        double denominator = (double)(2 * i);   // Calculate even denominator
        sum += numerator / denominator;
    }

    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
