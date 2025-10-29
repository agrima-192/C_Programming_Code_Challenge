//Program to Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

char findFirstRepeatingLowercase(char str[]) {
    int i, j;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = i + 1; j < len; j++) {
                if (str[i] == str[j]) {
                    return str[i];
                }
            }
        }
    }
    return '\0'; 
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    char repeatingChar = findFirstRepeatingLowercase(inputString);
    if (repeatingChar != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", repeatingChar);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
