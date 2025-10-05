//Program to Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, i, search_key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &search_key);

    int low = 0;
    int high = n - 1;
    int mid;
    int found_index = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == search_key) {
            found_index = mid;
            break;
        } else if (arr[mid] < search_key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    if (found_index != -1) {
        printf("%d found at index %d (position %d).\n", search_key, found_index, found_index + 1);
    } else {
        printf("%d is not present in the array.\n", search_key);
    }
    return 0;
}
