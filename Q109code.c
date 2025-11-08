//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integer elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        printf("Invalid value for k. k must be between 1 and the array size.\n");
        return 1;
    }
    int current_sum = 0;
    int max_sum = 0;

    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;
    for (int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("The maximum sum of a subarray of size %d is: %d\n", k, max_sum);
    return 0;
}
