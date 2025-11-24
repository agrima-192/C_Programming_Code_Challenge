// Program to Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

int main() {
    int choice;
    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    if (scanf("%d", &choice) != 1) {
        printf("INVALID INPUT! Please enter a number (0, 1, 2).\n");
        return 1;
    }
    if (choice < 0 || choice > 2) {
        printf("INVALID INPUT! Number must be 0, 1, or 2.\n");
        return 1;
    }
    
    Status result = (Status)choice;
    switch (result) {
        case SUCCESS:
            printf("Operation successful.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
    }
    return 0;
}
