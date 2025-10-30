//Program to Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_CHARS 256
int areAnagrams(const char *str1, const char *str2) {
    int count[NUM_CHARS] = {0};
    int i;
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++) {
        count[tolower(str1[i])]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        count[tolower(str2[i])]--;
    }
    for (i = 0; i < NUM_CHARS; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }

    return 0;
}
