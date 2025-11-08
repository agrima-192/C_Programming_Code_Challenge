/*Program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output.*/

#include <stdio.h>
void max_of_subarrays(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        printf("Invalid k value.\n");
        return;
    }
    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        printf("%d ", max_val);
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

    printf("Enter the elements of the array:\n");
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

    printf("\nMaximum elements for each window of size %d: ", k);
    max_of_subarrays(arr, n, k);
    printf("\n");
    return 0;
}
