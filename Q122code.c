#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr; // Declare a file pointer
    char buffer[256]; // Declare a character array (buffer) to store each line

    // Open the file in read mode ("r")
    // "info.txt" is the name of the file to be opened
    file_ptr = fopen("info.txt", "r");

    // Check if the file was opened successfully
    if (file_ptr == NULL) {
        printf("Error: Could not open the file 'info.txt'. Please ensure it exists.\n");
        exit(EXIT_FAILURE); // Exit the program if file opening fails
    }

    printf("Contents of 'info.txt':\n");

    // Read lines from the file until fgets returns NULL (indicating EOF or an error)
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer); // Print the read line to the console
    }

    // Close the file
    fclose(file_ptr);

    return 0; // Indicate successful program execution
}
