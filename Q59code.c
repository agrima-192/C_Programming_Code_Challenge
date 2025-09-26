//Program to Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n;
    int i;
    int even_count = 0;
    int odd_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements into the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else { // If not even, it's odd
            odd_count++;
        }
    }

    printf("\nNumber of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}
