// Program to Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

typedef struct {
    int roll_no;
    float marks;
    char name[50];
} Student;

int are_students_identical(Student s1, Student s2) {
    if (s1.roll_no != s2.roll_no) {
        return 0;
    }
    if (s1.marks != s2.marks) {
        return 0;
    }
    if (strcmp(s1.name, s2.name) != 0) {
        return 0;
    }
    return 1;
}

void get_student_details(Student *s) {
    scanf("%s %d %f", s->name, &s->roll_no, &s->marks);
}

int main() {
    Student student1, student2;
    printf("Enter details (Format: Name Roll_no Marks) :\n");
    printf("Student1: ");
    get_student_details(&student1);
    printf("Student2: ");
    get_student_details(&student2);
    if (are_students_identical(student1, student2)) {
        printf("\nSame\n");
    } else {
        printf("\nNot Same\n");
    }
    return 0;
}
