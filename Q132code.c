//Program to Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include<stdio.h>
enum Traffic_Light {
     RED,
     YELLOW,
     GREEN
     };

int main() {
    int input_value;
    enum Traffic_Light current_light;
    printf("Enter the Traffic Light color CODE:\n");
    printf("0 for RED, 1 for YELLOW, 2 for GREEN\n");
    
    if (scanf("%d", &input_value) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    current_light = (enum Traffic_Light)input_value;
    
    if (current_light == RED) {
        printf("Stop\n");
    } else if (current_light == YELLOW) {
        printf("Wait\n");
    } else if (current_light == GREEN) {
        printf("Go\n");
    } else {
        printf("Invalid light value entered.\n");
    }
    return 0;   
}
