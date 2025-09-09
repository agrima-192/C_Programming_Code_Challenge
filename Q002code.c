//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    int num1, num2, sum,dif,prod,quo;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    sum=num1+num2;
    dif=num1-num2;
    prod=num1*num2;
    printf("Sum : %d \n",sum);
    printf("Difference : %d \n",dif);
    printf("Product : %d \n", prod);
    if (num2 !=0){
             printf ("Quotient: %d \n",num1/num2);
} else {
       printf("cannot divide by zero.\n");
       }
    return 0;
}
