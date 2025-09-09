//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    // Read the year input from the user
    scanf("%d", &year);

    // Check if the year is a leap year using the leap year rules
    // A year is a leap year if it is divisible by 400
    // OR if it is divisible by 4 but not by 100
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0; // Indicate successful program execution
}
