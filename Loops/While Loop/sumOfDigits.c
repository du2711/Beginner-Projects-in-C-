#include <stdio.h>
int main() {
    int number, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            sum = sum + digit;
        }
        number = number/10;
    }
    printf("Sum of even digits: %d\n", sum);
    return 0;
}