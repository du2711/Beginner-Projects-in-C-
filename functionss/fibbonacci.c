#include <stdio.h>
void fibonacci(int n){
    int a=1,b=1;
    printf("1 1 ");
    for(int i=3;i<=n;i++){
        int sum = a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
}
int main(){
    int a;
    printf("Enter a no.: ");
    scanf("%d",&a);
    if(a<1) printf("Enter a positive Integer");
    else fibonacci(a);
    return 0;
}