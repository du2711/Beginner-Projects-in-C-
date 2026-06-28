#include <stdio.h>
int main()
{ 
    int a;
    printf("Enter the number: ");   
    scanf("%d" , &a );
    if(a%15==0)
    {
        printf("Divisible by 15");
    if((a%5==0 || a%3==0) && a%15==0)
    {
        printf("\nDivisible by both 3 and 5");
    }
    }
    else{
        printf("Not Divisible by both 3 and 5 or divisible by 15");
    }
    return 1;
}    