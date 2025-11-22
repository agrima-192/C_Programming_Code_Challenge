//Program to Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

void printDays(enum Month month) {
    switch (month) {
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days\n");
            break;
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days\n");
            break;
        case FEBRUARY:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }
}

void toLowerStr(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {
    char userInput[20];
    int found = 0;

    printf("Enter the name of the month: ");
    if (scanf("%19s", userInput) != 1) {
        return 1;
    }
    toLowerStr(userInput);

    for (int i = JANUARY; i <= DECEMBER; ++i) {
        enum Month current_month = (enum Month)i;
        char monthName[20];

        switch (current_month) {
            case JANUARY: strcpy(monthName, "january"); break;
            case FEBRUARY: strcpy(monthName, "february"); break;
            case MARCH: strcpy(monthName, "march"); break;
            case APRIL: strcpy(monthName, "april"); break;
            case MAY: strcpy(monthName, "may"); break;
            case JUNE: strcpy(monthName, "june"); break;
            case JULY: strcpy(monthName, "july"); break;
            case AUGUST: strcpy(monthName, "august"); break;
            case SEPTEMBER: strcpy(monthName, "september"); break;
            case OCTOBER: strcpy(monthName, "october"); break;
            case NOVEMBER: strcpy(monthName, "november"); break;
            case DECEMBER: strcpy(monthName, "december"); break;
        }
        if (strcmp(userInput, monthName) == 0) {
            printDays(current_month);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Month not found or invalid input.\n");
    }

    return 0;
}
