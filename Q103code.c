/*Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly 
to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum 
is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. 
If no such index exists, print -1.*/
#include <stdio.h>
#include <stdlib.h>
int findPivotIndex(int* nums, int size) {
    if (size == 0) {
        return -1;
    }

    long long totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < size; i++) {
        if (leftSum == (totalSum - leftSum - nums[i])) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("-1\n");
        return 0;
    }

    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, size);
    printf("%d\n", pivotIndex);

    free(arr);
    return 0;
}
