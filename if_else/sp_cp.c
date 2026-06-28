#include<stdio.h>
int main()
{
    int cp , sp ;
    printf("Enter cost price: ");
    scanf("%d", &cp);

    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp>cp){
        int p = sp - cp;
        printf("profit of %d \n" , p);
    }
    else
    {
        int l = cp - sp;
        printf("Loss is made %d \n" , l);
    }
    return 0;
    
}