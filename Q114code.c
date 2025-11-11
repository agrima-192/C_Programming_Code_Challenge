//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    if (n == 0) {
        printf("Length of the longest substring without repeating characters: 0\n");
        return 0;
    }

    int maxLength = 0;
    int left = 0;
    int charFrequency[128] = {0};

    for (int right = 0; right < n; right++) {
        char currentChar = s[right];
        charFrequency[currentChar]++;
        while (charFrequency[currentChar] > 1) {
            char charAtLeft = s[left];
            charFrequency[charAtLeft]--;
            left++;
        }
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    printf("Length of the longest substring without repeating characters: %d\n", maxLength);
    return 0;
}
