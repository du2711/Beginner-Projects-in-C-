#include <stdio.h>

int main(){
    int c = 9;
    int* b = &c;
    int** y = &b;
    int*** z = &y;
    printf("%d\n",c);
    printf("%d\n",*b);
    printf("%d\n",**y);
    printf("%d",***z);
    return 0;
}