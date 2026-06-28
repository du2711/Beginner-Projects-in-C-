#include <stdio.h>
void swap(int* a, int* b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int p,q;
    printf("Enter first no.: ");
    scanf("%d",&p);
    printf("Enter second no.: ");
    scanf("%d",&q);
    swap(&p,&q);
    printf("p: %d\nq: %d",p,q);
    return 0;
}