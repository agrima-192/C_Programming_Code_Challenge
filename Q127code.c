//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *inputFile, *outputFile;
    char buffer[100];
    printf("Input File (input.txt):");
    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error creating input.txt\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if (buffer[0] == '\n' || (buffer[0] == '\r' && buffer[1] == '\n')) {
            break;
        }
        fprintf(inputFile, "%s", buffer);
    }
    fclose(inputFile);
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt for reading\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt for writing\n");
        fclose(inputFile);
        return 1;
    }
    int character;
    while ((character = fgetc(inputFile)) != EOF) {
        character = toupper(character);
        fputc(character, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    outputFile = fopen("output.txt", "r");
    if (outputFile == NULL) {
        printf("Error opening output.txt for display\n");
        return 1;
    }
    printf("Output file (output.txt): ");
    while ((character = fgetc(outputFile)) != EOF) {
        putchar(character);
    }
    fclose(outputFile);
    return 0;
}
