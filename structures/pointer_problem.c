#include<stdio.h>
typedef int* point;
int main(){
    int x=5;
    int y=8;
    point p=&y,q=&x;
    printf("%p\n%p\n",p,q);
    return 0;
}  