//Program to Find and print the student with the highest marks.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
    int num_students;
    printf("Enter the number of students: ");
    if (scanf("%d", &num_students) != 1 || num_students <= 0) {
        printf("Invalid number of students. Exiting program.\n");
        return 1;
    }
    struct Student students[num_students];
    while (getchar() != '\n'); 
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        while (getchar() != '\n');
    }
    int max_marks = -1;
    int topper_index = -1;

    for (int i = 0; i < num_students; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            topper_index = i;
        }
    }
    if (topper_index != -1) {
        printf("\nTopper: %s (Marks: %d)\n", students[topper_index].name, students[topper_index].marks);
    } else {
        printf("\nNo students found.\n");
    }
    return 0;
}
