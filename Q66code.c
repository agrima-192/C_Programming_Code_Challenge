//Proram to insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100];
    int size, value, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);
    pos = size;
    for (i = size - 1; i >= 0; i--) {
        if (arr[i] > value) {
            arr[i + 1] = arr[i];
            pos = i;
        } else {
            break;
        }
    }
    arr[pos] = value;
    size++;

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
