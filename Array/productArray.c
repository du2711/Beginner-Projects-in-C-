#include<stdio.h>
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int prod =1;
    for(int i=0;i<4;i++){
        prod = prod * arr[i];
    }
    printf("%d", prod);
    return 0;
} 