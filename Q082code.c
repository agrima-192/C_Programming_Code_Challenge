//Program to print each character of a string on a new line.
#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    while (s[i] != '\0') {
        printf("%c\n", s[i]);
        i++;
    }

    return 0;
}
