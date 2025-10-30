//Program to Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 256

// Function to reverse a segment of a character array from start to end indices
void reverseWord(char arr[], int start, int end) {
    char temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[MAX_SENTENCE_LENGTH];
    int start = 0;
    int i = 0;
    int length;

    printf("Enter a sentence: ");
    fgets(sentence, MAX_SENTENCE_LENGTH, stdin);

    // Remove the trailing newline character captured by fgets
    length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
        length--; // Decrement length to reflect the change
    }

    // Iterate through the sentence to find word boundaries
    while (i < length) {
        if (sentence[i] == ' ') {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
        i++;
    }
    
    // Reverse the last word after the loop ends
    reverseWord(sentence, start, length - 1);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}
