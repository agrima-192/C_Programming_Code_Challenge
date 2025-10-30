// Program to Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
void leftRotate(char s[], int len) {
    if (len <= 1) return;
    char temp = s[0];
    for (int i = 0; i < len - 1; i++) {
        s[i] = s[i + 1];
    }
    s[len - 1] = temp;
}

int areRotations(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    char temp_s1[MAX_LEN];
    strcpy(temp_s1, s1);

    for (int i = 0; i < len1; i++) {
        if (strcmp(temp_s1, s2) == 0) {
            return 1;
        }
        leftRotate(temp_s1, len1);
    }

    return 0;
}

int main() {
    char s1[MAX_LEN];
    char s2[MAX_LEN];

    printf("Enter the first string: ");
    fgets(s1, MAX_LEN, stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(s2, MAX_LEN, stdin);
    s2[strcspn(s2, "\n")] = 0;

    if (areRotations(s1, s2)) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
