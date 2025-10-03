//Program to merge two arrays.
#include <stdio.h>
int main() {
    int size1, size2, mergedSize;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    mergedSize = size1 + size2;
    int mergedArr[mergedSize];
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
    printf("\nMerged array elements: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}

