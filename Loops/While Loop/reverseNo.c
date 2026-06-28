#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev = 0;
    while(n>0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;   
    }
    printf("Reversed number is: %d\n", rev); 
    
    return 0;
}