#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
// sum of series 1-2+3-4+5...+n terms
//odd + even -
    int sum=0;
    if(n%2==0)
    {
        sum=-n/2;
    }
    else
    {
        sum = -n/2 + n;
    }
    printf("sum of series is: %d\n",sum);
    return 0;
}