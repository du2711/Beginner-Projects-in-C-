#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d" , &a );

    if(a%15 ==0)
    {
        if(a%5==0)
       {
        if (a%3 == 0)
        {
            printf("Divisible by 3");
        }
        else
        {
            printf("Not Divisible by 3");
        }
       
    printf("\nDivisible by 15");
       }
    else{
        printf("Not Divisible by both 3 and 5");
        }
    }
    else{
        printf("not by 3 or 5 neither by 15");
    }    
return 1;
}