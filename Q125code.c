//Program to Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *filePointer;
    char filename[100];
    char textToAppend[1000];

    printf("Enter the name of the .txt file to open : ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Error reading filename input.\n");
        return 1;
    }
    filename[strcspn(filename, "\n")] = 0;
    filePointer = fopen(filename, "a");
    if (filePointer == NULL) {
        printf("Error opening the file %s. It might not exist, or permissions are incorrect.\n", filename);
        return 1;
    }
    printf("Enter text to append (max 999 characters): ");
    if (fgets(textToAppend, sizeof(textToAppend), stdin) == NULL) {
        printf("Error reading text input.\n");
        fclose(filePointer);
        return 1;
    }
    fprintf(filePointer, "%s", textToAppend);
    fclose(filePointer);
    printf("Text appended successfully to %s.\n", filename);
    return 0;
}
