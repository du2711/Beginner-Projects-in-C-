#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int total = 2 * n + 1; // Total letters in the first row
    for (int i = 1; i <= total; i++) {
        char ch = (char)(i + 64);
        printf("%c ", ch);
    }
    printf("\n");
    // Print the reversed diagonal cut-out pattern
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= total; j++) {
            if (j <= i || j > total - i)
                printf("%c ", j + 64); // Print letter
            else
                printf("  "); // Skip middle letters
        }
        printf("\n");
    }
    return 0;
}