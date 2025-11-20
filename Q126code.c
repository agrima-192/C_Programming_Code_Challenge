/* Program to Ask the user for a filename & Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; 
otherwise, read and display its content.*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char filename[100];
    char ch;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exixt!\n", filename);
    } else {
        printf("\nContent of '%s':\n", filename);
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }
        printf("\n");
        fclose(fp);
    }
    return 0;
}
