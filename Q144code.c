//Program to Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int id;
    int age;
};
void Details(struct Person p) {
    printf("Name: %s | ID: %d | Age: %d\n", p.name, p.id, p.age);
}

int main() {
    struct Person person1;
    printf("Enter details (Format: Name ID Age): ");
    if (scanf("%s %d %d", person1.name, &person1.id, &person1.age) != 3) {
        printf("Invalid input format. Please follow 'Name ID Age'.\n");
        return 1;
    }
    printf("\n");
    Details(person1);
    return 0;
}
