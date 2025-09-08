//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b; // a now holds the sum of original a and b
    b = a - b; // b now holds the original value of a (sum - original b)
    a = a - b; // a now holds the original value of b (new a - original a)
    
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
