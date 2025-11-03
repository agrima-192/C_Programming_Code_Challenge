/*Program to take a sorted array arr[] and an integer x as input, find the index of smallest element in arr[] that is greater than or equal to x and print it. 
This element is called the ceil of x. If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/

#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the integer x: ");
    scanf("%d", &x);
    int ceil_index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceil_index = i;
            break;
        }
    }

    if (ceil_index != -1) {
        printf("%d", ceil_index);
    } else {
        printf("%d", ceil_index);
    }

    return 0;
}
