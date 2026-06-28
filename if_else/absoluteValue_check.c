#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The Absolute value is: %d\n" , num);
    }
    else
    {
        int q = (num*-1);
        printf("The Absolute value is: %d\n", q);
    }
    return 0;
}