//Program to Take two filenames from user –a source file & a destination file. Copy all content from the source file to the destination file using fgetc() & fputc().

#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100];
    char destPath[100];
    int ch;
    printf("Enter source file path: ");
    scanf("%s", sourcePath);
    printf("Enter destination file path: ");
    scanf("%s", destPath);
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file \"%s\". Please check if it exists and you have read permissions.\n", sourcePath);
        return 1;
    }
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file \"%s\". Please check if you have write permissions.\n", destPath);
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("File contents copied successfully from \"%s\" to \"%s\".\n", sourcePath, destPath);
    return 0;
}
