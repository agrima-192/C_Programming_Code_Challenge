/*Program to take an integer array arr & an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. 
If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/

#include <stdio.h>
#include <stdlib.h>

void first_negative_in_subarrays(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        printf("Invalid k value.\n");
        return;
    }
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNegative = arr[i + j];
                break;
            }
        }
        printf("%d ", firstNegative);
    }
}

int main() {
    int n, k;
    int arr[100];
    printf("Enter the size of the array (n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input for n. Must be between 1 and 100. Exiting.\n");
        return 1;
    }
    printf("Enter the elements of the array (can be positive or negative):\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }
    printf("Enter the window size (k): ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid input for k. Exiting.\n");
        return 1;
    }
    printf("\nFirst negative elements for each window of size %d: ", k);
    first_negative_in_subarrays(arr, n, k);
    printf("\n");
    return 0;
}
