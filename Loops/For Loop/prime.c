#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 0;
    for(int i = 2; i <= n-1; i=i+1)
    {
        if(n%i==0)
        {
            a = 1;
            break;
        }
    } 
    if (n==1)  {printf("Neither Prime nor Composite\n");  } 
    else if(a==0) printf("Prime\n");
    else printf("Composite\n");
    return 0;
}