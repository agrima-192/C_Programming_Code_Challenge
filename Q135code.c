//Program to Assign explicit values starting from 10 and print them.

#include <stdio.h>
enum Letters {
    A = 10,
    B,
    C,
    D,
    E
};

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    printf("D=%d\n", D);
    printf("E=%d\n", E);
    
    return 0;
}
