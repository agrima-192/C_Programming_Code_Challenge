// Program to Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (isVowel(str[i])) {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
    }

    printf("String after removing vowels: %s\n", str);

    return 0;
}
