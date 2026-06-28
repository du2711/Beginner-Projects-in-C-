#include <stdio.h>
int main()
{
    int num;
    printf("enter your number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("The number is divisible by 5\n");
    }
    else
    {
        printf("The number is not divisible by 5\n");
    }
    return 0;
}