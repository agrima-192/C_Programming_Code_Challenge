//Program to check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int are_same_case_insensitive(char c1, char c2) {
    if (c1 >= 'A' && c1 <= 'Z') {
        c1 = c1 + 32;
    }
    if (c2 >= 'A' && c2 <= 'Z') {
        c2 = c2 + 32;
    }
    return c1 == c2;
}
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (right > left) {
        if (!are_same_case_insensitive(str[left], str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
