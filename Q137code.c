//Program to Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    GUEST,
    USER,
    ADMIN
} UserRole;

void display_role_message(UserRole role);

int main() {
    int user_input;
    UserRole user_role_assigned;
    printf("Please select your role by entering the corresponding number:\n");
    printf("0 for GUEST\n");
    printf("1 for USER\n");
    printf("2 for ADMIN\n");
    printf("Enter choice: ");

    if (scanf("%d", &user_input) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    if (user_input >= GUEST && user_input <= ADMIN) {
        user_role_assigned = (UserRole)user_input;
        printf("\n");
        display_role_message(user_role_assigned);
    } else {
        printf("\nError: Invalid role number entered (%d). Must be 0, 1, or 2.\n", user_input);
        return 1;
    }
    return 0;
}

void display_role_message(UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break;
        case USER:
            printf("Welcome back, registered user. You have standard access.\n");
            break;
        case GUEST:
            printf("Hello, guest. You have limited access.\n");
            break;
        default:
            printf("Error: Unknown role assigned.\n");
            break;
    }
}
