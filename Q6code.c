//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First number (num1) = %d\n", num1);
    printf("Second number (num2) = %d\n", num2);
    
    temp = num1; // Store the value of num1 in temp
    num1 = num2; // Assign the value of num2 to num1
    num2 = temp; // Assign the value stored in temp (original num1) to num2

    printf("\nAfter swapping:\n");
    printf("First number (num1) = %d\n", num1);
    printf("Second number (num2) = %d\n", num2);

    return 0;
}
