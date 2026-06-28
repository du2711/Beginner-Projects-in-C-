#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a number\n"); 
    scanf("%d", &a);
    printf("The square root is ");

    float root = cbrt(a);
    printf("%f\n", root);
    return 0;
}