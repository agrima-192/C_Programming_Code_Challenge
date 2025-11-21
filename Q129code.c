//Program to Read all integers, compute their sum and average, and print both, from a file numbers.txt that contains a list of integers separated by spaces. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    char filename[100];
    int number;
    int sum = 0;
    int count = 0;
    float average = 0.0;
    printf("File Name : ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }
    fclose(file);
    if (count > 0) {
        average = (float)sum / count;
    } else {
        printf("The file is empty or contains no valid integers.\n");
        return EXIT_SUCCESS;
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return EXIT_SUCCESS;
}
