// Program to Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50]; 
    float salary;
} Employee;

void add_employee() {
    FILE *file_ptr;
    Employee emp;
    char choice = 'y';
    int name_length = 50; 
    file_ptr = fopen("employees.bin", "ab");
    if (file_ptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
        }
    while (choice == 'y' || choice == 'Y') {
        printf("Enter employee ID: ");
        scanf("%d", &emp.id);
        while (getchar() != '\n'); 
        printf("Enter employee Name : ");
        fgets(emp.name, name_length, stdin); 
        emp.name[strcspn(emp.name, "\n")] = 0; 
        printf("Enter employee Salary: ");
        scanf("%f", &emp.salary);
        while (getchar() != '\n');
        fwrite(&emp, sizeof(Employee), 1, file_ptr);
        
        printf("Do you want to add another employee? (y/n): ");
        scanf(" %c", &choice);
        while (getchar() != '\n');
        }
        
    fclose(file_ptr);
    printf("     Employee data stored successfully!\n");
}

void display_employees() {
    FILE *file_ptr;
    Employee emp;
    file_ptr = fopen("employees.bin", "rb");
    if (file_ptr == NULL) {
        printf("Error opening file for reading or file does not exist!\n");
        return;
    }
    printf("\n--- Employee Data Read from File ---\n");
    while (fread(&emp, sizeof(Employee), 1, file_ptr) == 1) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }
    printf("\n");
    fclose(file_ptr);
}

int main() {
    add_employee();
    display_employees();

    return 0;
}
