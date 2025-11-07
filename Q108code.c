/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/
#include <stdio.h>
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    int answer[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int prefix_product = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix_product;
        prefix_product *= nums[i];
        
    }
    int suffix_product = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix_product;
        suffix_product *= nums[i];
    }

    printf("The answer array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}
