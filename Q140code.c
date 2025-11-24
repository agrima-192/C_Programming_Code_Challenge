// Program to Define a struct with enum Gender and print person's gender.

#include <stdio.h>
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;
typedef struct {
    Gender gender;
} Person;
int main() {
    Person p;
    int choice;
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    if (scanf("%d", &choice) != 1) {
        printf("INVALID INPUT! Please enter 0, 1, or 2.\n");
        return 1;
    }
    if (choice < 0 || choice > 2) {
        printf("INVALID INPUT! Please enter 0, 1, or 2.\n");
        return 1;
    }
    p.gender = (Gender)choice;
    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
    }
    return 0;
}
