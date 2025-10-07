//Program to Rotate an array to the right by k positions.
#include <stdio.h>

void main() {
    int n, k, i, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    k = k % n;

    for (int rotation = 0; rotation < k; rotation++) {
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
