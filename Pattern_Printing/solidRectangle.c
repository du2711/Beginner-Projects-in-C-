#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of columns: ");
    scanf("%d", &r);
    printf("Enter the number of rows: ");
    scanf("%d", &c);
    for(int i=1; i<=c; i++){
        for(int i=1; i<=r; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}