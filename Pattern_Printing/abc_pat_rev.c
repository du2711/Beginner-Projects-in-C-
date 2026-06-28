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
            int a = 1;
            int d= a+64;
        char ch=(char)d;
        printf("%c",j+64);
        a++;
        }
        for(int k=1;k<=i-1;k++)
        {
            printf("%c",i-k+64);
        }
        printf("\n");
    } 
    return 0;
}