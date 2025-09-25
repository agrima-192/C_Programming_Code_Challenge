//Program to find the sum of array elements.
#include <stdio.h>

int main() {
    int size, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
