//Program to Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", str); 

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch); 

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of %c = %d\n", ch, count);

    return 0;
}
