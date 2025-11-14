//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
int findRepeatedElement(int arr[], int n) {
    // Calculate the sum of all elements in the array
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    // Calculate the expected sum of numbers from 1 to n-1
    // The sum of an arithmetic series 1 to k is k * (k + 1) / 2
    // Here, k is n-1
    int expected_sum = (n - 1) * n / 2;

    // The difference between the actual sum and expected sum is the repeated element
    return actual_sum - expected_sum;
}

int main() {
    int n;
    printf("Enter the size of the array (n, where elements are 1 to n-1 with one repetition): ");
    scanf("%d", &n);

    // The array size will be n, containing numbers from 1 to n-1 with one repeated element.
    // Example: if n=5, elements are from 1 to 4, one repeated. Array size is 5.
    int arr[n]; 

    printf("Enter %d elements (numbers from 1 to %d, with one repetition):\n", n, n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated_element = findRepeatedElement(arr, n);
    printf("The repeated element is: %d\n", repeated_element);

    return 0;
}
