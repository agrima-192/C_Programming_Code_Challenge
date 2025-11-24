//Program to Print all enum names and integer values using a loop.

#include <stdio.h>
typedef enum {
    RED,
    YELLOW,
    GREEN,
    BLUE,
    PURPLE,
    ORANGE
} Color;

const char* ColorNames[] = {
    "RED",
    "YELLOW",
    "GREEN",
    "BLUE",
    "PURPLE",
    "ORANGE"
};

int main() {
    printf("List of all enum names and their integer values:\n");    
    for (int i = 0; i <= ORANGE; i++) {
        Color currentColor = (Color)i;  
        printf("%s=%d\n", ColorNames[i], currentColor);
    }
    return 0;
}
