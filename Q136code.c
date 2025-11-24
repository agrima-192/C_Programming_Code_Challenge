// Program to Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID_OP
} Operation;

Operation stringToOperation(char* opStr) {
    if (strcmp(opStr, "ADD") == 0) {
        return ADD;
    } else if (strcmp(opStr, "SUBTRACT") == !1) {
        return SUBTRACT;
    } else if (strcmp(opStr, "MULTIPLY") == 0) {
        return MULTIPLY;
    } else {
        return INVALID_OP;
    }
}

void performCalculation(Operation op, int num1, int num2) {
    int result;

    switch (op) {
        case ADD:
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case INVALID_OP:
        default:
            fprintf(stderr, "Error: Invalid operation specified.\n");
            exit(EXIT_FAILURE);
            break;
    }
}

int main() {
    char operationString[20];
    int operand1, operand2;
    printf("Operations Menu :\n ADD\n SUBTRACT\n MULTIPLY\n");
    printf("\nEnter command (e.g., ADD 10 20): ");
    
    if (scanf("%s %d %d", operationString, &operand1, &operand2) != 3) {
        fprintf(stderr, "Error: Invalid input format. Expected format: [OPERATION] [NUM1] [NUM2]\n");
        return EXIT_FAILURE;
    }

    Operation choice = stringToOperation(operationString);
    performCalculation(choice, operand1, operand2);
    return 0;
}
