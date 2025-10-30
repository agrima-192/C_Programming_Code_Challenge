// Program to Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;
    
    printf("Enter a full name: ");
    fgets(name, 100, stdin);

    if (name[0] != '\0' && name[0] != ' ' && isalpha(name[0]))
    {
        printf("%c.", toupper(name[0]));
    }

    for (i = 1; i < strlen(name) - 1; i++)
    {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && isalpha(name[i+1]))
        {
            printf("%c.", toupper(name[i+1]));
        }
    }
    
    printf("\n");

    return 0;
}
