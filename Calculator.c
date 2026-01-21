#include <stdio.h>
int main()
{
    float a, b;
    char choice;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("CHOOSE YOUR OPERATION :\n");
    printf("Option a: a+b\n");
    printf("Option b: a-b\n");
    printf("Option c: a*b\n");
    printf("Option d: a/b\n");
    printf("Enter your choice: ");
    scanf(" %c",&choice);
    if(choice=='a'){
        printf("sum is: %.2f\n", a + b);
    }
    else if(choice=='b'){
        printf("difference is: %.2f\n", a - b);
    }
    else if(choice=='c'){
        printf("product is: %.2f\n", a * b);
        }
    else if(choice=='d'){
        printf("quotient is: %.2f\n", a / b);
        }
    else{
        printf("choose a valid option");
    }
        return 0;
}