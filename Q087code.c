//Program to Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int spaces = 0;
    int digits = 0;
    int specialChars = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            specialChars++;
        }
    }
    printf("\nNumber of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}
