#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    printf("enter two numbers\n");
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=add(a,b);
    printf("the sum is %d\n",sum);
    return 0;
}