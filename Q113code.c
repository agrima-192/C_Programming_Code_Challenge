/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. 
Print the kth smallest element as output.*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
    printf("Enter the value of k (1-indexed): ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k. k must be between 1 and the size of the array.\n");
        return 1; 
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    return 0;
}
