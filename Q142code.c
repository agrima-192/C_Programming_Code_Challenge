// Program to Store details of 5 students in an array of structures and print all.

#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    struct Student students[5]; 
    int i;
    int c; 
    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter roll number: ");
        if (scanf(" %d", &students[i].roll_no) != 1) {
            printf("Invalid input for roll number. Exiting.\n");
            return 1;
        } 
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);       
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Enter marks: ");
        if (scanf(" %f", &students[i].marks) != 1) {
            printf("Invalid input for marks. Exiting.\n");
            return 1;
        }
    }

    printf("\n--- Student Details ---\n");
    printf("%-10s %-30s %-10s\n", "Roll No", "Name", "Marks");
    printf("------------------------------------------------------------------\n");   
    for (i = 0; i < 5; i++) {
        printf("%-10d %-30s %-10.2f\n", 
               students[i].roll_no, 
               students[i].name, 
               students[i].marks);
    }
    return 0;
}
