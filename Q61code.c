//Program to Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, i, search_element;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Get array elements from the user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to search for from the user
    printf("Enter the element to search: ");
    scanf("%d", &search_element);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            printf("%d found at index %d.\n", search_element, i);
            return 0; // Element found, exit the program
        }
    }

    // If the loop completes, the element was not found
    printf("%d not found in the array.\n", search_element);

    return 0;
}
