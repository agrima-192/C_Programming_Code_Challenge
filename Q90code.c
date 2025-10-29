//Program to Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>

void toggleCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("String before toggling case: %s\n", str);
    toggleCase(str);
    printf("String after toggling case: %s\n", str);

    return 0;
}
