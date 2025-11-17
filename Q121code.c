/*Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, 
and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.*/

#include <stdio.h>
int main() {
    FILE *filePointer;
    char name[50];
    int age;

    filePointer = fopen("info.txt", "w");
    if (filePointer == NULL) {
        printf("Error: Could not open the file info.txt\n");
        return 1;
    }
    
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Age: %d\n", age);
    fclose(filePointer);
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
