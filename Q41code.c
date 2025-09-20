//Program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    last = num % 10;  // extract last digit
    
    digits = (int)log10(num);  // number of digits - 1
    
    first = num / (int)pow(10, digits);  // extract first digit
    
    // remove first and last digit
    int middle = num % (int)pow(10, digits); 
    middle = middle / 10;
    
    // construct swapped number
    swapped = last * (int)pow(10, digits) + middle * 10 + first;
    
    printf("Number after swapping first and last digit: %d\n", swapped);
    
    return 0;
}
