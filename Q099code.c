//Program to Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char inputDate[11];
    char outputDate[12];
    int day, month, year;
    
    const char *monthNames[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 1;
    }

    sprintf(outputDate, "%02d-%s-%d", day, monthNames[month - 1], year);

    printf("Formatted date: %s\n", outputDate);

    return 0;
}
