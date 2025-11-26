//Program to Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
struct Student getStudentDetails() {
    struct Student s;
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;
    printf("Enter roll number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    while (getchar() != '\n');
    return s;
}

struct Student findTopStudent(struct Student students[], int numStudents) {
    struct Student topStudent = students[0];
    for (int i = 1; i < numStudents; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    while (getchar() != '\n');
    struct Student students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        students[i] = getStudentDetails();
    }
    struct Student topStudent = findTopStudent(students, numStudents);
    printf("\n--- Top Student Details ---\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.rollNumber);
    printf("Marks: %.2f\n", topStudent.marks);
    return 0;
}
