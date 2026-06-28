#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int a;
    for(int i=1; i<=c; i++){
        for(int j=1; j<=r; j++)
        if(i==1 || i==c || j==1 || j==r)
            printf("*");
        else
            printf(" ");
        printf("\n");
    }
    return 0;
}