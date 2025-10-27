//Program to Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    char ch;
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("\nNumber of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
