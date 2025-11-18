//Program to Read a text file and count total number of characters, words, and lines. A word is a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char filename[100]; 
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;
    printf("Enter the filename to read: ");
    scanf("%99s", filename); 
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s. Please ensure the file exists.\n", filename);
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (ch != ' ' && ch != '\n' && ch != '\t') {
            if (!in_word) {
                in_word = 1;
                words++;
            }
        } else {
            in_word = 0;
        }
    }
    fclose(file);
    if (characters > 0 && ch != '\n') {
        lines++;
    }
    printf("--- File Statistics for '%s' ---\n", filename);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
