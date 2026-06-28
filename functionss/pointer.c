#include <stdio.h>

int main(){
    int c=9;
    int* b=&c;
    printf("%p\n",&c);
    printf("%d",*b);
    return 0;
}