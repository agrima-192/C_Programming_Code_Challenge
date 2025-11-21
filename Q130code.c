//Program to Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file_ptr;
    char name[50]; 
    int roll_number, i, num_students;
    float marks;

    //Write records to file using fprintf()
    printf("How many student records do you want to enter? ");
    if (scanf("%d", &num_students) != 1 || num_students <= 0) {
        printf("Invalid input for the number of students.\n");
        return 1;
    }
    file_ptr = fopen("students.txt", "w");
    if (file_ptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1); 
    }
    printf("\n");
    for (i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name); 
        printf("Roll Number: ");
        scanf("%d", &roll_number);
        printf("Marks: ");
        scanf("%f", &marks);
        fprintf(file_ptr, "%s %d %.2f\n", name, roll_number, marks);
    }
    fclose(file_ptr);
    
    //Read records from file using fscanf() and display
    file_ptr = fopen("students.txt", "r");
    if (file_ptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    printf("\nReading records from the file students.txt and displaying:\n");
    while (fscanf(file_ptr, "%s %d %f", name, &roll_number, &marks) == 3) {
        printf("Name: %s  |  Roll: %d  |  Marks: %.0f\n", name, roll_number, marks);
    }
    fclose(file_ptr);
    return 0;
}
