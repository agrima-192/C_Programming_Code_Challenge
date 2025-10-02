//Program to reverse an array without taking extra space.
#include <stdio.h>
// Function to reverse an array in-place
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end) {
        // Swap elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
