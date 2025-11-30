//Pogram to Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float gpa;
    char name[50];
};

int main() {
    struct Student *s_ptr;
    s_ptr = (struct Student *)malloc(sizeof(struct Student));

    if (s_ptr == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    s_ptr->id = 101;
    s_ptr->gpa = 3.85;
    sprintf(s_ptr->name, "Alice Smith"); 
    printf("--- Student Details ---\n");
    printf("Name: %s\n", s_ptr->name);
    printf("ID: %d\n", s_ptr->id);
    printf("GPA: %.2f\n", s_ptr->gpa);
    free(s_ptr);
    s_ptr = NULL;

    return 0;
}
