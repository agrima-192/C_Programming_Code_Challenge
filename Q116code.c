/*Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i 
and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices 
separated by a space as output. If no solution exists, print "-1 -1".*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the positive integers for the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    int found_i = -1;
    int found_j = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                found_i = i;
                found_j = j;
                break;
            }
        }
        if (found_i != -1) {
            break;
        }
    }

    printf("%d %d\n", found_i, found_j);
    return 0;
}
