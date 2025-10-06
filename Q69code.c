//Program to Find the second largest element in an array.
#include<stdio.h>
void main() {
    int n, i;
    int arr[100];
    int largest, secondLargest;
    
    printf("Enter the number of elements in th array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("The second largest element in the array is : ");
    printf("%d", secondLargest);
}
