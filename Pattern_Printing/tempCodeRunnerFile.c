#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");   
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for (int p=1;p<=n-i;p=p+1) // for spaces
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(int k=1;k<=i-1;k++)
        {
            printf("%d",i-k);
        }
        printf("\n");
    } 
    return 0;
}