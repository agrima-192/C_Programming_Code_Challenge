/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum 
of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at 
most one pivot integer for the given input.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int x = 1; x <= n; ++x) {
        // Calculate sum from 1 to x
        int leftSum = (1 + x) * x / 2;

        // Calculate sum from x to n
        int rightSum = (x + n) * (n - x + 1) / 2;

        // Check if left sum equals right sum
        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
