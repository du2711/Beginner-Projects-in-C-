#include <stdio.h>
int main() {
    int price, discount;
    printf("Enter the price: ");
    scanf("%d", &price);
    if(price > 10000)
    {
        printf("Congratulations! You get a Prime membership.\n");
    }
    else if(price > 5000)
    {
        discount = price - 500;
        printf("You get a discount of: %d\n", discount);
    }
    else if (price > 2000)
    {
        discount = price - 100;
        printf("You get a discount of: %d\n", discount);
    }
    else{
        printf("No discount available.\n");
    }
    return 0;
}