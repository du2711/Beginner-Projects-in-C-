#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        if (i % 2 == 1) {
            // Odd rows: print numbers starting from 1
            for (j = 1; j <= i; j++) {
                printf("%d", j);
            }
        } else {
            // Even rows: print characters starting from 'A'
            for (j = 0; j < i; j++) {
                printf("%c", 'A' + j);
            }
        }
        printf("\n");
    }

    return 0;
}