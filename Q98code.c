// Program to Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int len, i, space_count = 0, initial_printed = 0;

    printf("Enter a full name : ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            space_count++;
        }
    }
    if (len > 0 && isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
        initial_printed = 1;
    }
    int current_space = 0;
    for (i = 1; i < len; i++) {
        if (name[i] == ' ') {
            current_space++;

            if (current_space < space_count) {
                while (name[i + 1] == ' ' && i + 1 < len) {
                    i++;
                }
                if (i + 1 < len && isalpha(name[i + 1])) {
                    printf("%c.", toupper(name[i + 1]));
                }
            } else {
                printf(" %s", name + i + 1);
                break; // Exit the loop after printing the surname
            }
        }
    }
    printf("\n");

    return 0;
}
