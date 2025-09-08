//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    rate = rate / 100; 
    amount = principal * pow((1 + rate), time);
    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount (Compound Interest) = %.2f\n", amount);

    return 0;
}
