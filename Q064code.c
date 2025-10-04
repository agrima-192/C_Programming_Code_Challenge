//Program to find the digit that occurs the most times in an integer number.
#include <stdio.h>
int findMostFrequentDigit(int num) {
    int counts[10] = {0};
    int digit;
    int maxCount = -1;
    int mostFrequentDigit = 0;
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        return 0;
    }
    while (num > 0) {
        digit = num % 10;
        counts[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostFrequentDigit = i;
        }
    }
    return mostFrequentDigit;
}
int main() {
    int number = 1223355;
    int result = findMostFrequentDigit(number);
    printf("The most frequent digit in %d is %d\n", number, result);

    number = 669260267;
    result = findMostFrequentDigit(number);
    printf("The most frequent digit in %d is %d\n", number, result);

    number = 0;
    result = findMostFrequentDigit(number);
    printf("The most frequent digit in %d is %d\n", number, result);
    
    number = -11122;
    result = findMostFrequentDigit(number);
    printf("The most frequent digit in %d is %d\n", number, result);

    return 0;
}
