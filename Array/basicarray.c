#include<stdio.h>
int main()
{
    int a[5];

    for(int i=0;i<=4;i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("%d", a[0]);
    // float a[3] = {1.5, 2.5, 3.5};
    // a[0] = 10.5;
    // printf("%f", a[0]);

    // char a[5] = {'a', 'b', 'c', 'd', 'e'};
    // a[0] = 'z'; 
    // printf("%c", a[0]); 
    return 0;
} 