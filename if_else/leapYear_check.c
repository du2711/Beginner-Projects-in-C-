#include <stdio.h>
int main()
{
    int num;
    printf("enter your Year: ");
    scanf("%d", &num);
    if (num % 4 == 0)
    {
        printf("The Year is leap year\n");
    }
    else
    {
        printf("The Year is not leap year\n");
    }
    return 0;
}