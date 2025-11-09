/*Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.*/

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];
    int current_max = arr[0];
    int all_negative = 1;
    int largest_negative = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest_negative) {
            largest_negative = arr[i];
        }
        if (arr[i] >= 0) {
            all_negative = 0;
        }
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
        } else {
            current_max = current_max + arr[i];
        }
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }
    if (all_negative == 1 && max_so_far < 0) {
        printf("Maximum contiguous sum (all elements negative): %d\n", largest_negative);
    } else {
        printf("Maximum contiguous sum: %d\n", max_so_far);
    }
    return 0;
}
