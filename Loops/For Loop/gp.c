#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a =1;
    for(int i = 1; i <= n; i=i+1)
    {
        printf("%d\n" , a);
        a=a*2;
    }
    return 0;
}