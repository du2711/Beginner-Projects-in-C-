#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter exponent: ");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++)
    {
        power = power * a;
    }
    printf("Result is: %d\n",power);
    return 0;
}