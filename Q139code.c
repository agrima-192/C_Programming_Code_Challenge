//Program to Show that enums store integers by printing assigned values.

#include<stdio.h>
enum counting {
     ZERO,
     ONE,
     TWO,
     THREE,
     FOUR
     };

int main(){
    printf("--- Default Enum Values ---\n");
    printf("Zero: %d\n", ZERO);
    printf("One: %d\n", ONE);
    printf("Two: %d\n", TWO);
    printf("Three: %d\n", THREE);
    printf("Four: %d\n", FOUR);
    return 0;
}
