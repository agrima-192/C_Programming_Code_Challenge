//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float costPrice, sellingPrice;
    float profitLossAmount;
    float percentage;

    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    profitLossAmount = sellingPrice - costPrice;

    if (profitLossAmount > 0) {
        printf("It's a Profit!\n");
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Profit Amount: %.2f\n", profitLossAmount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profitLossAmount < 0) {
        printf("It's a Loss!\n");

        profitLossAmount = -profitLossAmount; 
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Loss Amount: %.2f\n", profitLossAmount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("Neither profit nor loss.\n");
    }

    return 0;
}
