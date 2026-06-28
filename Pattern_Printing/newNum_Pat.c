#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int nsp=1; // number of spaces
    int nst=n; // number of stars
    for(int i=1;i<=2*n+1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++) // for stars
        {
            printf("*");
        }
        for(int k=1;k<=nsp;k++) // for spaces
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++) // for stars
        {
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}