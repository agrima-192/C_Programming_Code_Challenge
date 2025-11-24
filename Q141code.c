//
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;
    printf("Enter the following details :\n");
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0;
    printf("Roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("\nName: %s | Roll Number: %d | Marks: %.2f |\n", s1.name, s1.roll_no, s1.marks);
    return 0;
}
