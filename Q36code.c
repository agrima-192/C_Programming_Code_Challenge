//Program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int findHCF(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int number1, number2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 <= 0 || number2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }
    printf("The HCF of %d and %d is %d.\n", number1, number2, findHCF(number1, number2));

    return 0;
}
