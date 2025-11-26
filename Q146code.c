//Program to Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
#include <string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int id;
    char name[50];
    struct Date joining_date;
};

int main() {
    struct Employee emp1;
    printf("Enter Employee Details:\n");
    printf(" ID: ");
    if (scanf("%d", &emp1.id) != 1) return 1;
    while (getchar() != '\n');
    printf(" Name: ");
    fgets(emp1.name, sizeof(emp1.name), stdin);
    emp1.name[strcspn(emp1.name, "\n")] = 0;
    printf(" Joining Date (DD MM YYYY): ");
    if (scanf("%d %d %d", &emp1.joining_date.day,
                          &emp1.joining_date.month,
                          &emp1.joining_date.year) != 3) return 1;
    printf("\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           emp1.name,
           emp1.id,
           emp1.joining_date.day,
           emp1.joining_date.month,
           emp1.joining_date.year);
    return 0;
}
