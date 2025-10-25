//Program to Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    char c;

    printf("Enter a string: ");

    while ((c = getchar()) != '\n' && count < 99) {
        str[count] = c;
        count++;
    }
    str[count] = '\0';

    int length = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
