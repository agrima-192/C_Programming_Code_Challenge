//Write a program to take a string input. Change it to sentence case. (File Handling)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define BUFFER_SIZE 512
void toTitleCase(char *str) {
    int capitalizeNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i]) || str[i] == '.' || str[i] == ',') {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            str[i] = toupper((unsigned char)str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
    }
}
void getUserInputToFile(const char *filename) {
    FILE *f = fopen(filename, "w");
    if (f == NULL) {
        perror("Error creating input file");
        exit(EXIT_FAILURE);}
    char buffer[BUFFER_SIZE];
    printf("Enter lines of text to be processed.\n");
    printf("Enter a blank line (just press Enter) to stop input:\n");
    printf("------------------------------------------------------\n");
    while (1) {
        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL) {
            break;
            }
        if (buffer[0] == '\n') {
            break;
        }
        fprintf(f, "%s", buffer);
    }
    fclose(f);
    printf("Input saved to '%s'. Starting processing...\n\n", filename);
}

int main() {
    const char *INPUT_FNAME = "user_input.txt";
    const char *OUTPUT_FNAME = "user_output.txt";
    FILE *inputFile, *outputFile;
    char buffer[BUFFER_SIZE];
    getUserInputToFile(INPUT_FNAME);
    inputFile = fopen(INPUT_FNAME, "r");
    if (inputFile == NULL) {
        perror("Error opening input file for reading");
        exit(EXIT_FAILURE);
    }
    outputFile = fopen(OUTPUT_FNAME, "w");
    if (outputFile == NULL) {
        fclose(inputFile);
        perror("Error opening output file for writing");
        exit(EXIT_FAILURE);
    }
    while (fgets(buffer, BUFFER_SIZE, inputFile) != NULL) {
        toTitleCase(buffer);
        fprintf(outputFile, "%s", buffer);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("File processing complete.\n");
    printf("Input read from '%s'\n", INPUT_FNAME);
    printf("Output written to '%s'\n", OUTPUT_FNAME);

    return 0;
}
