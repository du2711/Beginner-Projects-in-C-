#include <stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    else return n*factorial(n-1);
}
int main(){
    int a;
    printf("Enter a no.: ");
    scanf("%d",&a);
    int res = factorial(a);
    printf("Factorial is: %d",res);
    return 0;
}