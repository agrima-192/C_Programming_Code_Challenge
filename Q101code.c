/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated.
You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.*/

#include <stdio.h>

// Function to find the first and last occurrence of a target in a sorted array
void findFirstAndLastOccurrence(int nums[], int size, int target) {
    int firstIndex = -1;
    int lastIndex = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            if (firstIndex == -1) {
                firstIndex = i;
            }
            lastIndex = i;
        }
    }

    if (firstIndex != -1) {
        printf("%d,%d" , firstIndex, lastIndex);
    } else {
        printf("-1,-1\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter the sorted array elements (space-separated): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);

    findFirstAndLastOccurrence(nums, size, target);
    return 0;
}
