#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int fact = 1;
    while(a>0){
        fact = fact * a;
        a--;
    }
    printf("Factorial is: %d\n", fact);
    return 0;
}