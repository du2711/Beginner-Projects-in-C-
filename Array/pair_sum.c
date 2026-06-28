#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Your entered array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int pair = 0;
    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d:\n", target);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                pair++;
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    if (pair == 0) {
        printf("No pairs found.\n");
    } else {
        printf("Total possible pairs: %d\n", pair);
    }

    return 0;
}