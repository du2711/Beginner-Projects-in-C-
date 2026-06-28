#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of times to print Hello World: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        printf("Hello World\n");
    }
    printf("%d" , n);
    return 0;
}
