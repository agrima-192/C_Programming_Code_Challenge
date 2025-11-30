//Program to Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>
struct Person {
    int id;
    float salary;
    char name[50];
};

int main() {
    struct Person p1;
    struct Person *ptr = &p1;
    printf("Enter ID: ");
    scanf("%d", &ptr->id);
    printf("Enter Name: ");
    while ((getchar()) != '\n'); 
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = '\0';
    printf("Enter Salary: ");
    scanf("%f", &ptr->salary);

    printf("\n--- User Input Data ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
