#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    int a = 1, b = 1;
    if (n == 1) {
        printf("1\n");
    } else {
        printf("1 1 ");
        for (int i = 3; i <= n; i++) {
            int sum = a + b;
            printf("%d ", sum);
            a = b;
            b = sum;
        }
        printf("\n");
    }
    return 0;
}