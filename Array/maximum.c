#include<stdio.h>
int main()
{
    int a[5] = {-10, -20, -30, -40, -50};
    int max = a[0];
    for (int i=0;i<5;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("%d", max);
    return 0;
}