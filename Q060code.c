//Program to Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() {
    int arr[] = {5, -9, 10, 17, -23, -65, 0, 45, 0, 38};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Number of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);

    return 0;
}
