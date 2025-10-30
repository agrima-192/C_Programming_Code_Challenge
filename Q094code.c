//Program to Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 256
#define MAX_WORD_LENGTH 50

int main() {
    char sentence[MAX_SENTENCE_LENGTH];
    char longestWord[MAX_WORD_LENGTH];
    char currentWord[MAX_WORD_LENGTH];

    int currentWordLength = 0;
    int maxWordLength = 0;
    int i = 0;
    int j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\t') {
            currentWord[j] = sentence[i];
            currentWordLength++;
            j++;
        } else {
            currentWord[j] = '\0';
            if (currentWordLength > maxWordLength) {
                maxWordLength = currentWordLength;
                strcpy(longestWord, currentWord);
            }
            currentWordLength = 0;
            j = 0;
        }
    }
    currentWord[j] = '\0';
    if (currentWordLength > maxWordLength) {
        maxWordLength = currentWordLength;
        strcpy(longestWord, currentWord);
    }

    printf("The longest word is: %s\n", longestWord);
    return 0;
}
