#include<stdio.h>
int main(){
    float a,b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);

    printf("Choose an operation (+, -, *, /): ");
    char op;
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        printf("Sum: %f\n",a+b);
        break;
    case '-':
        printf("Difference: %f\n",a-b);
        break;
    case '*':
        printf("Product: %f\n",a*b);
        break;
    case '/':
        printf("Quotient: %f\n",a/b);
        break;
    default:
        printf("Invalid operation\n");
        break;
    }
    return 0;
}